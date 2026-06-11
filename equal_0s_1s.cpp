#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    unordered_map<int, int> fp;
    
    int sum = 0;
    int maxlen = 0;
    fp[0] = -1;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            sum += 1;
        }else{
            sum -= 1;
        }
        if(fp.find(sum) != fp.end()){
            maxlen = max(maxlen, i - fp[sum]);
        }else{
            fp[sum] = i;
        }
    }
    cout << maxlen << endl;
}
