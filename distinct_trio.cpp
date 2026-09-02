#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long int
void solve(){
    int N; cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        int num; cin >> num;
        arr[i] = num;
    }
    sort(arr.begin(), arr.end());
    ll ans = 0;
    for(int i = 1; i < N-1; i++){
        auto uit = upper_bound(arr.begin(), arr.end(), arr[i]);
        int next_val = arr.end() - uit;
        auto lit = lower_bound(arr.begin(), arr.end(), arr[i]);
        int prev_val = lit - arr.begin();
        ans += 1LL*prev_val*next_val;
    }
    cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
