#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#define ll unsigned long long int
using namespace std;

void solve(){
    int N, K; cin >> N >> K;
    string s; cin >> s;
    int fm = N/K;
    vector<bool> own(fm, false);
    for(unsigned int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            int fi = i/K;
            own[fi] = true;
        }
    }
    int ans = 0;
    for(int f = 0; f < fm; f++){
        if(!own[f]) ans++;
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
