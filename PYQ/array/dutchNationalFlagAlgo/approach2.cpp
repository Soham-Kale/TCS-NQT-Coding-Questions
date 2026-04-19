#include<bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int n) {
    // 0 1 2
    int zero = 0;
    int one = 0;
    int two = 0;
    
    for(int i=0; i<n; i++) {
        // count number of zero
        if(arr[i] == 0) {
            zero++;
        } else if(arr[i] == 1) {
            one++;    // count number of one
        } else {
            two++;
        }
    }
    
    int index = 0;
    // print zero
    for(int i=0; i<zero; i++) {
        arr[index++] = 0;
    }
    // print one
    for(int i=0; i<one; i++) {
        arr[index++] = 1;
    }
    // print two
    for(int i=0; i<two; i++) {
        arr[index++] = 2;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    sortArray(arr, n);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}