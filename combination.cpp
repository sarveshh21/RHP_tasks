#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<long long> A(n), B(m);
    
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int j = 0; j < m; j++){
        cin >> B[j];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int i = 0, j = 0;
    int c = 0;
    
    while(i < n && j < m){
        if(B[j] <= 2*A[i]){
            c++;
            i++;
            j++;
        }else{
            i++;
        }
    }
    cout << c << endl;
}
