#include<bits/stdc++.h>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;
    
    int internal[100][100], external[100][100];
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> internal[i][j];
        }
    }
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> external[i][j];
        }
    }
    
    int x, y;
    cin >> x >> y;
    
    cout << internal[x][y] + external[x][y];
    return 0;
}