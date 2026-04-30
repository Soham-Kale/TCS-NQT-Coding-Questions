#include<iostream>
using namespace std;

string removeDuplicate(string input) {
    
    // If the input string is empty, return an empty string
    if(input.empty()) return "";
    string result;
    
    // Always add the first character to the result
    result += input[0];
    
    for(int i=1; i<input.length(); ++i) {
        // If the current character is different from the previous one, add it to the result
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