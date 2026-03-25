#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<char>s(n);

    for(int i=0; i<s.size(); i++) {
        cin >> s[i];
    }

    int left = 0;
    int right = n-1;

    while(left < right) {
        swap(n[left], n[right]);
        left++;
        right--;
    }

    cout << "Reverse: " << n;
    return 0;
}