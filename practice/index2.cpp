#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    unordered_map<char, int>freq;
    vector<char>order;
    
    // store
    for(char c: str) {
        if(freq[c] == 0) {
            order.push_back(c);
        }
        freq[c]++;
    }
    
    char mostReapting = '\0';
    for(char c: order) {
        if(freq[c] == 1) {
            mostReapting = c;
            break;
        }
    }
    
    int maxCount = 0;
    char repeatValue = '\0';
    // repeating value
    for(char c: order) {
        if(freq[c] > maxCount) {
            maxCount = freq[c];
            repeatValue = c;
        }
    }
    
    if(mostReapting == '\0') {
        cout << "null " << repeatValue;
    } else {
        cout << mostReapting << " " << "null";
    }
    return 0;
}