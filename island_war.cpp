#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int N, M; cin >> N >> M;
    vector<pair<int, int>> arr;
    for(int i = 0; i < M; i++){
        int a, b; cin >> a >> b;
        arr.push_back({a, b-1});
    }
    sort(arr.begin(), arr.end(), [] (const pair<int, int>& x, const pair<int, int>& y){
        return x.second < y.second;
    });
    int count = 0, rtm = -1;
    for(auto[a, b] : arr){
        if(rtm < a){
            count++; rtm = b;
        }
    }
    cout << count << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
