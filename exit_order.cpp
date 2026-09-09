#include<iostream>
#include<algorithm>
using namespace std;

void solve(){
    int N; cin >> N; 
    int st = 1, end = 10;
    for(int ctr = 1; ctr <= N; ctr++){
        int curr; cin >> curr;
        if(!(curr >= st && curr <= end)){
            cout << "NO" << endl;
            return;
        }
        if(ctr%10 == 0){
            st += 10;
            end += 10;
        }
    }
    cout << "YES" << endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
