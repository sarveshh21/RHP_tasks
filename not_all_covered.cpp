#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> psum(n+2, 0);
    while(m-- > 0){
        int from, to;
        cin >> from >> to;
        psum[from]++;
        psum[to+1]--;
    }
    int minv = INT_MAX;
    for(int w=1; w<=n; w++){
        psum[w] += psum[w-1];
        minv = min(minv, psum[w]);
    }
    cout << minv << endl;
    return 0;
}
