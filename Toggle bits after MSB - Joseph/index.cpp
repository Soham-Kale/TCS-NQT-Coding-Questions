#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    if(!(cin >> n)) return 0;

    string s = "";

    while(n){
        s = char('0' + (n & 1)) + s;
        n >>= 1;
    }

    for(char &c : s)
        c = (c == '0') ? '1' : '0';

    cout << stoi(s, nullptr, 2) << endl;
}