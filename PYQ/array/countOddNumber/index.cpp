#include<bits/stdc++.h>
using namespace std;

char countFreq(char arr[], int n) {
    // declare
    unordered_map<char, int>freq;      // key value
    char ans = '\0';     // for checking all even condition
    
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
    
    char ans = countFreq(arr, n);
    
    if(ans == '\0') {
        cout << "All are even" << endl;
    }
    else {
        cout << ans << endl;
    }
    return 0;
}