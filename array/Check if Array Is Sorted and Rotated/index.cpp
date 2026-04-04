#include<bits/stdc++.h>
using namespace std;

int coutValues(vector<int>&s) {
    int count = 0;
    int m = s.size();
    
    for(int i=1; i<m; i++) {
        if(s[i-1] > s[i]) {
            count++;
        }
    }
    
    if(s[m-1] > s[0]) {
        count++;
    }
    
    return count<=1;
}

int main() {
    int n;
    cin >> n;
    
    vector<int>s(n);
    
    for(int i=0; i<s.size(); i++) {
        cin >> s[i];
    }
    
    int ans = coutValues(s);
    cout << ans;
    
    return 0;
}