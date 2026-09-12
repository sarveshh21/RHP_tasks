#include <iostream>
#include <string>
using namespace std;

void solve(){
    string s, t; cin >> s >> t;
    string dt = t+t;
    if(dt.find(s) != string::npos){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
