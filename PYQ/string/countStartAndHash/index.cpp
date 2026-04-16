#include<iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int countStar = 0;
    int countHash = 0;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '*') {
            countStar++;
        } else if(s[i] == '#') {
            countHash++;
        }
    }
    
    cout << countStar - countHash;
    return 0;
}