#include<bits/stdc++.h>
using namespace std;

void moveZeros(  vector<int> &s) {
    int i = 0;
    for(int j=0; j<s.size(); j++) {
        if(s[j] != 0) {
            swap(s[j], s[i]);
            i++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<int> s(n);
    
    for(int i=0; i<n; i++) {
        cin >> s[i] ;
    }
    
    moveZeros(s);
    
    for(int i=0; i<s.size(); i++) {
        cout << s[i] << " ";
    }
    
    return 0;
}