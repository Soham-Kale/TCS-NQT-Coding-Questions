#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {

    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            if(arr[row][col] == target) {
                return true;
            }
        }
    }
    return false;
}

void printSum(int arr[][4], int row, int col) {
    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<4; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

int largestRowSum(int arr[][4], int row, int col) {
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<4; col++) {
            sum += arr[row][col];
        }
        
        if(sum > maxi) {
            maxi =  sum;
            rowIndex = row;
        }
    }
    cout << "Largest row sum: " << maxi << endl;
    return rowIndex;
}


int main() {
    // create 2d array
    int arr[3][4];

    // taking input --> column wise input
    for(int col=0; col<4; col++) {
        for(int row=0; row<3; row++) {
            cin >> arr[row][col];
        }
    }
    
    // printing  
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Enter Element to Search: " << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)) {
        cout << "Element Found " << endl;
    } else {
        cout << "Element Not Found " << endl;
    }
    
    printSum(arr, 3,4);

    cout << "Row with largest sum: " << largestRowSum(arr, 3, 4) << endl;
    
    return 0;
}