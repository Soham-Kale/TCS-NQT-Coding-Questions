#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    // sort
    int i = 0;
    int j = 0;
    int k = n-1;
    
    while(j <= k) {
        if(arr[j] == 1) {
            j++;
        }
        else if(arr[j] == 2) {
            swap(arr[j], arr[k]);
            k--;
        }
        else {
            swap(arr[j], arr[i]);
            i++;
            j++;
        }
    }
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}