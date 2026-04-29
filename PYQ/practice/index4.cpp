#include<bits/stdc++.h>
using namespace std;

char findChar(char arr[], int n) {
    
    unordered_map<char, int>freq;
    char ans = '\0';
    
    for(int i=0; i<n; i++) {
        freq[arr[i]]++;
    }
    
    for(int i=0; i<n; i++) {
        if(freq[arr[i]] % 2 != 0) {
            ans = arr[i];
            break;
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
    
    char ans = findChar(arr, n);
    
    if(ans == '\0') {
        cout << "All are even";
    }
    else {
        cout << ans;
    }
    return 0;
}