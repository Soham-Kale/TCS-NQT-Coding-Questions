#include<bits/stdc++.h>
using namespace std;

bool findElement(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;
    int mid = (start+end)/2;

    while(start <= end) {
        // how to find mid in 2d array
        int element = matrix[mid/col][mid%col];

        if(element == target) {
            return true;
        } else if(element < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return false;
}

int main() {
    int row, col;
    cin >> row >> col;
    
    vector<vector<int>> matrix(row, vector<int>(col));
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cin >> target;
    
    cout << findElement(matrix, target);
    return 0;
}