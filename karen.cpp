#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    if (!(cin >> n >> k >> q)) return 0;

    vector<int> lArr(n);
    vector<int> rArr(n);
    int maxTemp = 0;

    for (int i = 0; i < n; i++) {
        cin >> lArr[i] >> rArr[i];
        if (rArr[i] > maxTemp) {
            maxTemp = rArr[i];
        }
    }

  
    vector<int> dp(maxTemp + 2, 0);

    for (int i = 0; i < n; i++) {
        dp[lArr[i]]++;
        dp[rArr[i] + 1]--;
    }

   
    vector<int> prefix(maxTemp + 1, 0);
    int currentCoverage = 0;

    for (int temp = 1; temp <= maxTemp; temp++) {
        currentCoverage += dp[temp];
        prefix[temp] = prefix[temp - 1];
        if (currentCoverage >= k) {
            prefix[temp]++;
        }
    }

  
    while (q--) {
        int d, b;
        cin >> d >> b;

       
        if (b > maxTemp) {
            b = maxTemp;
        }

       
        int result = prefix[b] - (d > 0 ? prefix[d - 1] : 0);
        
        cout << result << "\n";
    }

    return 0;
}
