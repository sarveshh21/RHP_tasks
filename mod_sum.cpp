#include <iostream>
using namespace std;

void solve(){
    int N; cin >> N;
    int sum = 0;
    for(int i = 0; i < N; i++){
        int a; cin >> a;
        sum += a;
    }
    int fs = sum - N;
    cout << fs << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
