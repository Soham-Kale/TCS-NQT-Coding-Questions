#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char name[], int n) {
    int s = 0;
    int e = n-1;

    while(s < e) {
        if( tolower(name[s]) != tolower(name[e])) {
            return false;
        } else {
            s++;
            e--;
        }
    }
    return true;
}

int getLength(char name[]) {
    int count = 0;
    for(int i=0; i<name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char name[20];
    cout << "Enter Your name: ";
    cin >> name;
    
    int ans = getLength(name);
    
    reverseString(name, ans);

    cout << checkPalindrome(name, ans);;
    return 0;
}
