#include<bits/stdc++.h>
using namespace std;

char countFreq(char arr[], int n) {
    // declare
    unordered_map<char, int>freq;      // key value
    char ans;
    
    // store
    for(int i=0; i<n; i++) {
        freq[arr[i]]++;
    }
    
    // traverse
    for(int i=0; i<n; i++) {
        if(freq[arr[i]] %2 != 0) {  // odd number
            ans = arr[i];
            break;      // i want only first odd number from map
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    char arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    cout << countFreq(arr, n);
    
    return 0;
}