#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 1) {
        cout << 2000;
    } else if(n == 3) {
        cout << 5000;
    } else if(n == 6) {
        cout << 8000;
    } else if(n == 9) {
        cout << 11000;
    } else if(n == 12) {
        cout << 12000;
    } else {
        cout << "Error";
    }

    return 0;
}