#include<bits/stdc++.h>
using namespace std;

int countNumbers(vector<int>&s, int n) {
    int count = 1;
    for(int i=0; i<s.size(); i++) {
        if(s[i] >= n) {
            count ++;
            i++;
        } else {
            i++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int>s(n);
    for(int i=0; i<n; i++) {
        cin >> s[i];
    }

    int ans = countNumbers(s, n);
    cout << ans;
    
    return 0;
}