#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    string result = "";

    for(char ch : s) {
        if(!result.empty() && result.back() == ch) {
            result.pop_back();   // remove duplicate
        } else {
            result.push_back(ch); // add character
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    cout << removeDuplicates(s);

    return 0;
}


// Input: s = "abbaca"
// Output: "ca"

// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, 
// and this is the only possible move.  The result of this move is that the string is "aaca", 
// of which only "aa" is possible, so the final string is "ca".