#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    // odd times, even times --> specially given ans single single odd time
    char ans=0;

    for(int i=0; i<n; i++) {
        ans = ans ^ arr[i];         /// XOR -->    b^b=0, even number becomes zero
    }
    
    cout << ans;

    return 0;
}