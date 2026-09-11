#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#define ll unsigned long long int
using namespace std;

void solve(){
    int N; cin >> N; 
    vector<int> cmn(26, 50);
    for(int i = 1; i <= N; i++){
        string s; cin >> s;
        vector<int> curr(26, 0);
        for(char ch : s){
            curr[(ch - 'a')]++;
        }
        for(int i = 0; i < 26; i++){
            cmn[i] = min(cmn[i], curr[i]);
        }
    }
    for(int i = 0; i < 26; i++){
        while(cmn[i]--){
            cout << (char)('a' + i);
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
