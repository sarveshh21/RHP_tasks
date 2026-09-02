#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
using namespace std;
#define ll unsigned long long int

void solve(){
    int N, K; cin >> N >> K;
    vector<int> dp(N+1, 0);
    int rem = 0;
    map<int, int> m;
    m[0] = 0;  
    for(int i = 1; i <= N; i++){
        int curr; cin >> curr;
        rem = (rem+curr)%K;
        if(m.find(rem) != m.end()){
            int prevind = m[rem];
            dp[i] = max(dp[i-1], 1+dp[prevind]);
        }else{
            dp[i] = dp[i-1];
        }
        m[rem] = i;  
    }
    cout << dp[N] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
}
