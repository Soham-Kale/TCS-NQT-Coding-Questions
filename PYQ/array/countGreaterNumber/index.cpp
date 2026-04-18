#include<bits/stdc++.h>
using namespace std;

int findValue(int arr[], int n) {
    int cnt = 1;
    int maxi = arr[0];
    
    for(int i=1; i<n; i++) {
        if(maxi < arr[i]) {
            cnt++;
            maxi = arr[i];
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    cout << findValue(arr, n);
    
    return 0;
}