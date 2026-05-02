#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    // Initialize a variable to keep track of the position of the next non-zero element
    int i = 0;
    // Move all non-zero elements to the beginning of the array
    for(int j=0; j<n; j++) {
        // If the current element is non-zero, swap it with the element at index i and increment i
        if(arr[j] != 0) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}