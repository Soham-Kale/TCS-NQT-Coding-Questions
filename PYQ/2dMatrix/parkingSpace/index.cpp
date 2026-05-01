#include<bits/stdc++.h>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;
    
    int arr[row][col];
    // vector<vector<int>> arr(row, vector<int>(col));
    
    int index = -1;
    int maxi = 0;
    
    // input and count 1s in each row
    for(int i=0; i<row; i++) {
        int cnt = 0;
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
            
            // count 1s
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

    // if index is not -1, then add 1 to it because we want 1-based indexing
    if(index != -1) {
        index++;
    }
    
    cout << index ;
    return 0;
}