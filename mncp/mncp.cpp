#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll unsigned long long int

void solve(){
    ll x, y, k; cin >> x >> y >> k;
    ll pcnt = 0, ctr = 0, d = y-x;
    while(ctr < k){
        ll rem = (y+ctr) % (x+ctr);
        if(rem == d) break;
        pcnt += rem; ctr++;
    }
    if(ctr < k){
        pcnt += (k-ctr)*d;
    }
    cout << pcnt << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
