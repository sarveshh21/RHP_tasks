#include <iostream>
#include <set>
using namespace std;

void solve(){
    int L, Q; cin >> L >> Q;
    set<int> st = {0, L};
    
    while(Q--){
        int qt, x; cin >> qt >> x;
        if(qt == 1){
            st.insert(x);
        }else{
            auto it = st.upper_bound(x);
            cout << *it-*(prev(it)) << endl;
        }
    }
}

int main(){
    solve();
}

