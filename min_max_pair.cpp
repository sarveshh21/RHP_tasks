#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n+1];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    int samecnt=0;int exgcnt=0;
    for(int i=1; i<=n; i++){
        if(i==arr[i]){
            samecnt++;
        }
        else if(i==arr[arr[i]]){
            exgcnt++;
        }
    }
    cout << exgcnt/2 + 1LL*samecnt*(samecnt-1)/2 << endl;
    return 0;
}
