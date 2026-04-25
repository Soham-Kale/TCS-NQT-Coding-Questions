#include<iostream>
using namespace std;

string removeDuplicate(string input) {
    
    if(input.empty()) return "";
    string result;
    
    result += input[0];
    
    for(int i=1; i<input.length(); ++i) {
        if(input[i] != input[i-1]) {
            result += input[i];
        }
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    
    string ans = removeDuplicate(str);
    cout << ans;
    return 0;
}