#include<bits/stdc++.h>
using namespace std;

void reverseString(char name[], int n) {
    int s = 0;
    int e = n -1;
    
    while( s < e )  {
        swap(name[s++], name[e--]);
    }
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
    
    cout << name;
    return 0;
}