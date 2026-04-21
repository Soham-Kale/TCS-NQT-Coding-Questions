#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int a;
    cin >> a;

    unordered_map<string, int> m;
    m["mon"] = 6;
    m["tue"] = 5;
    m["wed"] = 4;
    m["thu"] = 3;
    m["fri"] = 2;
    m["sat"] = 1;
    m["sun"] = 0;

    int ans = 0;

    if(a > m[s]) {
        ans = 1 + (a - m[s] - 1) / 7;
    }

    cout << ans;
    return 0;
}