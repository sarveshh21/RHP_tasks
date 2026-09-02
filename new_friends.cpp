#include <iostream>
#include <vector>
#define ll long long
using namespace std;


int find(vector<int>& ldr, int node){
    if(ldr[node] != node){
        ldr[node] = find(ldr, ldr[node]);
    }
    return ldr[node];
}
void join(vector<int>& ldr, int rt, int lt){
    ldr[find(ldr, rt)] = find(ldr, lt);
}

void solve(){
    int N, E; cin >> N >> E;
    vector<int> ldr(N+1);
    for(int node = 1; node <= N; node++) ldr[node] = node;
    vector<int> edges(E+1);
    
    for(int i = 1; i <= E; i++){
        int a, b; cin >> a >> b;
        join(ldr, a, b);
        edges[i] = a;
    }
    vector<int> gcnt(N+1, 0);
    vector<int> ecnt(N+1, 0);

    for(int node = 1; node <= N; node++){
        gcnt[find(ldr, node)]++;
    }
    for(int i = 1; i <= E; i++){
        int a = edges[i];
        ecnt[find(ldr, a)]++;
    }
    ll ans = 0;
    for(int node = 1; node <= N; node++){
        ll curr = ((1LL*gcnt[node]*(gcnt[node]-1))/2) - ecnt[node];
        ans += curr;
    }
    cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
