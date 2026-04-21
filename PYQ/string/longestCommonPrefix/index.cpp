#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> arr;
    string word;

    // take full line input
    string line;
    getline(cin, line);

    stringstream ss(line);

    while(ss >> word) {
        arr.push_back(word);
    }

    if(arr.empty()) {
        cout << "";
        return 0;
    }

    sort(arr.begin(), arr.end());

    string first = arr[0];
    string last = arr[arr.size() - 1];

    string ans = "";

    for(int i = 0; i < first.length(); i++) {
        if(first[i] != last[i]) break;
        ans += first[i];
    }

    cout << ans;
    return 0;
}