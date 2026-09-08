#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#define ll unsigned long long int
using namespace std;

void solve(){
      int N; cin >> N;
      int odd = 0, eoq = 0, eeq = 0;
      for(int ct = 1; ct <= N; ct++){
        int curr; cin >> curr;
        if(curr % 2 == 1){
            odd++;
        }else{
            int q = curr/2;
            if(q % 2 == 1){
                eoq++;
            }else{
                eeq++;
            }
        }
      }
      cout << max({odd, eoq, eeq}) << endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
