#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &s, int k) {
    int n = s.size();
    // If k is greater than n, we can rotate the array k % n times instead of k times
    k = k % n;  // handle k > n
    
    vector<int> temp(n);
    
    for(int i = 0; i < n; i++) {
        // Calculate the new position for each element and place it in the temp array
        temp[(i + k) % n] = s[i];
    }
    
    s = temp;
}

int main() {
    int n, k;
    cin >> n;
    
    vector<int> s(n);
    
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    cin >> k;
    
    rotateArray(s, k);
    
    for(int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    
    return 0;
}