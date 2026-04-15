#include<bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>& matrix) {
        vector<int>ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row*col;

        // index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        while(count < total) {
            // print starting row
            for(int i=startingCol; count<total  && i<=endingCol; i++) {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // ending column
            for(int i=startingRow; count<total  && i<=endingRow; i++) {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // Ending Row
            for(int i=endingCol; count<total  && i>=startingCol; i--) {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // starting column
            for(int i=endingRow; count<total  && i>=startingRow; i--) {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;   
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
    
    vector<int> result = spiralMatrix(matrix);
    
    for(int x : result) {
        cout << x << " ";
    }    
    
    return 0;
}