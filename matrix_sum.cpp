#include <iostream>
#include <vector>
using namespace std;

int main(){
    int rows, cols;
    cin >> rows >> cols;
    
    vector<vector<int>> a(rows, vector<int>(cols));
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> a[i][j];
        }
    }
    
    int r, c;
    cin >> r >> c;
    
    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int sum = 0;
    
    for(int k = 0; k < 8; k++){
        int nr = r + dr[k];
        int nc = c + dc[k];
        
        if(nr >= 0 && nr < rows && nc >= 0 && nc < cols){
            sum += a[nr][nc];
        }
    }
    cout << sum << endl;
}
