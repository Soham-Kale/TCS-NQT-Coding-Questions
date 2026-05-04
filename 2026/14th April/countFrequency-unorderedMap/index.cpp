#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);          // stores order
    unordered_map<int, int> freq;

    // input + frequency
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    // find max frequency
    int maxFreq = 0;
    for(auto &it : freq) {
        maxFreq = max(maxFreq, it.second);
    }

    // find smallest ID with max frequency
    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == maxFreq) {
            ans = min(ans, arr[i]);
        }
    }

    cout << ans;
    return 0;
}