#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Using vector instead of array for dynamic sizing
    vector<int> arr(n);

    // Read the input array
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;

    // Move all non-zero elements to the beginning of the array
    for(int i = 0; i < n; i++)
        // If the current element is non-zero, place it at the index 'count' and increment 'count'
        if(arr[i] != 0)
            // Place the non-zero element at the index 'count' and increment 'count'
            arr[count++] = arr[i];

    // Fill the remaining elements with zeros
    for(int i = count; i < n; i++)
        // Set the remaining elements to zero
        arr[i] = 0;

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}