#include <bits/stdc++.h>
using namespace std;

int solve(int i, vector<int>& arr, int currentSum, int maxSum) {
    if(currentSum > maxSum) return 0; // invalid
    if(i == arr.size()) return currentSum;

    // include
    int include = solve(i + 1, arr, currentSum + arr[i], maxSum);

    // exclude
    int exclude = solve(i + 1, arr, currentSum, maxSum);

    return max(include, exclude);
}

int main() {
    int n, maxSum;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    cin >> maxSum;

    cout << solve(0, arr, 0, maxSum);
}