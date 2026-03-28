#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);   // always safe

    stringstream ss(s);
    string token;

    int product = 1;
    bool found = false;

    while(getline(ss, token, ',')) {
        int num = stoi(token);

        if(num != 0) {
            product *= num;
            found = true;
        }
    }

    if(!found) product = 0;

    cout << product;
}