#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,T;
    cin >> N >> T;
    
    int arr[1000];
    
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }
    
    // sort array
    sort(arr, arr+N);
    
    int maxDiff = 0;
    
    // form groups of size T
    for(int i=0; i+T-1 < N; i+=T) {
        // calculate difference between last and first element of the group
        int diff = arr[ i + T - 1] - arr[i];
        // update max difference
        maxDiff = max(maxDiff, diff);
    }
    
    cout << maxDiff;
    return 0;
}