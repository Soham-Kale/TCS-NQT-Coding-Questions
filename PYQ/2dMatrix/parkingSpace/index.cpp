#include<bits/stdc++.h>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;
    
    int arr[row][col];
    // vector<vector<int>> arr(row, vector<int>(col));
        
    int index = -1;
    int maxi = 0;
    
    // input
    for(int i=0; i<row; i++) {
        int cnt = 0;
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
            
            if(arr[i][j] == 1) {
                cnt++;
            }
        }
        
        // check maxi
        if(maxi < cnt) {
            maxi = cnt;
            index = i;
        }
    }

    if(index != -1) {
        index++;
    }
    
    cout << index ;
    
    return 0;
}