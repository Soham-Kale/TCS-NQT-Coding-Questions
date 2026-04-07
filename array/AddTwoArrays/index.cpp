#include<bits/stdc++.h>
using namespace std;

vector<int>reverse(vector<int>v) {
    int s = 0;
    int e = v.size() - 1;
    
    while(s < e) {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> arraySum(vector<int>&s, int n, vector<int>&l, int m) {
    int i = n-1;
    int j = m-1;
    vector<int>ans;
    int carry = 0;
    
    while(i>=0 && j>=0) {
        int val1 = s[i];
        int val2 = l[j];
        int sum = val1 + val2 + carry;
        
        carry = sum / 10;
        sum = sum % 10;
        
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // first case
    while(i>=0) {
        int sum = s[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        
        ans.push_back(sum);
        i--;
    }
    
    // second case
    while(j>=0) {
        int sum = l[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        
        ans.push_back(sum);
        j--;
    }
    
    // Third case
    while(carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        
        ans.push_back(sum);
    }
    
    // reverse(ans.begin(), ans.end());
    return reverse(ans);
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int>s(n);
    vector<int>l(m);
    
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }   
    
    for(int i = 0; i < m; i++) {
        cin >> l[i];
    } 
    
    vector<int> ans = arraySum(s, n, l, m);
    
    for(int x : ans) cout << x << " ";

    return 0;
}