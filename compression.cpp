#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> s;
    while(n--){
        int urr;
        cin >> urr;
        s.insert(urr);
    }
    cout<<s.size();
    cout<<endl;
    for(int x : s){
        cout<<x<<" ";
    }
}
