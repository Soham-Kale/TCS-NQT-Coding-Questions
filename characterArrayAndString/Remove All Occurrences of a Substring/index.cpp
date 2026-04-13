#include<bits/stdc++.h>
using namespace std;

int main() {
    string str, part;
    cin >> str >> part;
    
    while(str.length() != 0 && str.find(part) < str.length()) {
        str.erase(str.find(part), part.length());
    }
    
    cout << str;
    return 0;
}

// Example: 
// Input: s = "daabcbaabcbc", part = "abc"
// Output: "dab"
// Explanation: The following operations are done:
// - s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
// - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
// - s = "dababc", remove "abc" starting at index 3, so s = "dab".
// Now s has no occurrences of "abc".