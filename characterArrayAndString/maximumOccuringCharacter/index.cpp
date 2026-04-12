#include<bits/stdc++.h>
using namespace std;

char getMaxOccCharacter(string s) {
    int arr[26] = {0};

    // count only alphabets
    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if(isalpha(ch)) {
            ch = tolower(ch);
            int index = ch - 'a';
            arr[index]++;
        }
    }

    // find max occ character
    int maxi = 0;
    int ans = 0;

    for(int i = 0; i < 26; i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
            ans = i;
        }
    }

    return 'a' + ans;
}

int main() {
    string s;
    getline(cin, s);   // take full input (including spaces)

    cout << getMaxOccCharacter(s) << endl;
    return 0;
}