#include<bits/stdc++.h>
using namespace std;

int main() {
    int Row,Column;
    cin >> Row >> Column;
    
    int internal[100][100], external[100][100];
    
    // input internal marks
    for(int i=0; i<Row; i++) {
        for(int j=0; j<Column; j++) {
            cin >> internal[i][j];
        }
    }
    
    // input external marks
    for(int i=0; i<Row; i++) {
        for(int j=0; j<Column; j++) {
            cin >> external[i][j];
        }
    }
    
    int i, j;
    cin >> i >> j;
    
    cout << internal[i][j] + external[i][j];
    return 0;
}