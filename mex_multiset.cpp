#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#define ll unsigned long long int
using namespace std;

void solve(){
    int N; cin >> N;
    vector<int> arr(N);
    vector<int> zi;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        if(arr[i] == 0){
            zi.push_back(i);
        }
    }
    if(zi.size() == 1){
        cout << "NO" << endl;
        return;
    }
    string s (N, 'C');
    if(zi.size() > 0){
        s[zi[0]] = 'B';
        for(int i = 1; i < zi.size(); i++){
            s[zi[i]] = 'A';
        }
    }
    cout << "YES" << endl << s << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
