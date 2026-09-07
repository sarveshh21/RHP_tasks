#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#define ll unsigned long long int
using namespace std;

int hcf(int a, int b){
    if(b == 0){
        return a;
    }else{
        return hcf(b, a%b);
    }
}

void solve(){
    int N; cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    cout << hcf(arr[0], arr[N-1]) << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
