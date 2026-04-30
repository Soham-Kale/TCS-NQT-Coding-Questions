#include<iostream>
using namespace std;

string removeDuplicateOcc(string input) {
    // check if string is empty or not
    if(input.empty()) return "";
    
    string result="";
    result += input[0];
    
    for(int i=1; i<input.length(); i++) {
        if(input[i] != input[i-1]) {
            result += input[i];
        }
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    
    string ans = removeDuplicateOcc(str);
    cout << ans;
    return 0;
}