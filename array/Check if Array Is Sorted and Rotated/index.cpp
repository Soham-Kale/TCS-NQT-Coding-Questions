#include<bits/stdc++.h>
using namespace std;

int coutValues(vector<int>&s) {
    int count = 0;
    int m = s.size();
    
    for(int i=1; i<m; i++) {
        // check if the previous element is greater than the current element
        if(s[i-1] > s[i]) {
            count++;
        }
    }
    
    // check if the last element is greater than the first element
    if(s[m-1] > s[0]) {
        count++;
    }
    
    // if the count is less than or equal to 1, then the array is sorted and rotated
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
    
    // print true if the array is sorted and rotated, otherwise print false
    cout << (ans ? "true" : "false");
    
    return 0;
}