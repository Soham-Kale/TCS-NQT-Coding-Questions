#include<bits/stdc++.h>
using namespace std;

void printWave(vector<vector<int>> &arr, int nRow, int mCol) {
    
    for(int col=0; col<mCol; col++) {
        
        if(col && 1) {
            // odd Index --> Bottom to top
            for(int row=nRow-1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        } else {
            // even Index --> top to Bottom
            for(int row=0; row < nRow; row++) {
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main() {
    int row, col;
    cin >> row >> col;
    
    vector<vector<int>> arr(row, vector<int>(col));
    
    // int arr[row][col];

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }
    
    printWave(arr, row, col);
    
    return 0;
}