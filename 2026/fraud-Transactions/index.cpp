#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<pair<string, string>> seen; // to track (sender, receiver)

    string sender, receiver;
    int timestamp, amount;

    int prevTime = -1;

    for(int i = 0; i < n; i++) {
        cin >> sender >> receiver >> timestamp >> amount;

        // Rule 1: Duplicate Transaction
        if(seen.count({sender, receiver})) {
            cout << "Error: Duplicate Transaction";
            return 0;
        }

        seen.insert({sender, receiver});

        // Rule 2: Fraud Detection (check consecutive timestamps)
        if(prevTime != -1 && (timestamp - prevTime) > 60) {
            cout << "Fraud Detected";
            return 0;
        }

        prevTime = timestamp;
    }

    // Rule 3: All valid
    cout << "All Transactions Valid";

    return 0;
}