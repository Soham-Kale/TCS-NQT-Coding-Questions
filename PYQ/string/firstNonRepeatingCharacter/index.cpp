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

    // Count frequency
    for (char c : s) {
        freq[c]++;
    }

    // First non-repeating character
    char firstNonRepeat = '\0';
    for (char c : s) {
        if (freq[c] == 1) {
            firstNonRepeat = c;
            break;
        }
    }

    // Most repeated character
    int maxFreq = 0;
    char mostRepeat = '\0';

    for (auto &it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            mostRepeat = it.first;
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