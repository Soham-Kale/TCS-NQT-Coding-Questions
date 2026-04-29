#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    if (s.length() == 0) {
        cout << "Invalid input";
        return 0;
    }

    unordered_map<char, int> freq;
    vector<char> order; // To maintain the order of characters

    // Count frequency
    for (char c : s) {
        if (freq[c] == 0) {
            order.push_back(c);
        }
        freq[c]++;
    }

    // First non-repeating character
    char firstNonRepeat = '\0';
    for (char c : order) {
        if (freq[c] == 1) {
            firstNonRepeat = c;
            break;
        }
    }

    // Most repeated character
    // int maxFreq = 0;
    // char mostRepeat = '\0';

    // for (auto &it : freq) {
    //     if (it.second > maxFreq) {
    //         maxFreq = it.second;
    //         mostRepeat = it.first;
    //     }
    // }

    int maxFreq = 0;
    char mostRepeat = '\0';
    
    // We can also find the most repeated character in the same loop as we find the first non-repeating character
    for (char c : order) {
        if (freq[c] > maxFreq) {
            maxFreq = freq[c];
            mostRepeat = c;
        }
    }

    // Output logic
    if (firstNonRepeat == '\0') {
        // all repeating
        cout << "None " << mostRepeat;
    } else {
        cout << firstNonRepeat << " " << mostRepeat;
    }

    return 0;
}