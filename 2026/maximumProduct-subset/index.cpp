#include<bits/stdc++.h>
using namespace std;

int findMaxValue(vector<int> &s) {
    int product = 1;
    int negativeCount = 0;
    int maxNegative = INT_MIN; // closest to 0
    bool hasPositive = false;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] > 0) {
            product *= s[i];
            hasPositive = true;
        }
        else if(s[i] < 0) {
            negativeCount++;
            product *= s[i];
            maxNegative = max(maxNegative, s[i]);
        }
    }

    // If odd negatives → remove one
    if(negativeCount % 2 == 1) {
        product /= maxNegative;
    }

    // Edge case: no positive & only one negative
    if(!hasPositive && negativeCount == 1) {
        return 0;
    }

    return product;
}

int main() {
    int n;
    cin >> n;

    vector<int> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    cout << findMaxValue(s);
    return 0;
}