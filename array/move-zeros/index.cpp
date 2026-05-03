#include<bits/stdc++.h>
using namespace std;

void moveZeros(  vector<int> &s) {
    // i will point to the position where we want to place the next non-zero element
    int i = 0;
    for(int j=0; j<s.size(); j++) {
        // if current element is non-zero, swap it with the element at index i and increment i
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