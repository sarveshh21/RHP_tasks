#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll  long long int
using namespace std;

void solve(){
    int N; cin >> N;
    map<int, int> m;
    for(int ctr = 1; ctr <= N; ctr++){
        int curr; cin >> curr;
        m[curr]++;
    }
    int ans = 0;
    for(auto[key, val] : m){
        if(val%2 != 0){
            ans++;
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
