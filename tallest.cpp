#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int N; cin >> N;
    vector<pair<int, int>> arr(N);

    for(int i = 0; i < N; i++){
        int H, L; cin >> H >> L;
        arr[i] = make_pair(H, L);
    }
    sort(arr.begin(), arr.end(), greater<>());
    int prevTime = 0;

    vector<int> ltarr, htarr;
    for(auto[H, L] : arr){
        if(L > prevTime){
            prevTime = L;
            ltarr.push_back(L);
            htarr.push_back(H);
        }
    }

    int Q; cin >> Q;
    while(Q--){
        int T; cin >> T;
        auto it = upper_bound(ltarr.begin(), ltarr.end(), T);
        int idx = it-ltarr.begin();
        cout << htarr[idx] << endl;
    }
}

int main(){
    solve();
}
