#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
using namespace std;
    
void solve() {
    int R;
    cin >> R;

    map<int, vector<pair<int, int>>> g;
    set<int> vis;

    while(R--){
        int src, dest, dist;
        cin >> src >> dest >> dist;

        g[src].push_back(make_pair(dest, dist));
        g[dest].push_back(make_pair(src, dist));
    }
    int st, end;
    cin >> st >> end;

    priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, st));

    while(!pq.empty()){
        auto[currdist, city] = pq.top();
        pq.pop();
        if(!vis.count(city)){
            vis.insert(city);
            if(city == end){
                cout << currdist; 
                return;
            }
            for(auto[oc, ocd] : g[city]){
                if(!vis.count(oc)){
                    pq.push(make_pair(currdist+ocd, oc));
                }
            }
        }
    }
    cout << "City " << end << " cannot be reached from City " << st;
}

int main() {
    solve();
    return 0;
}
