#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    string temp = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        } else {
            temp.push_back(str[i]);
        }
    }
    
    cout << temp;
    return 0;
}

// space ko @40 se replace karna hai
// i/p: My name is Soham Kale
// o/p: My@40name@40is@40Soham@40Kale