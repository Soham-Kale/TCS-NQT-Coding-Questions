#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &s, int k) {
    int n = s.size();
    k = k % n;  // handle k > n
    
    vector<int> temp(n);
    
    for(int i = 0; i < n; i++) {
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