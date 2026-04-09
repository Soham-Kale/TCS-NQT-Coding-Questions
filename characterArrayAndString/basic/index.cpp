#include<bits/stdc++.h>
using namespace std;

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
    
    cout << "Length of array is: " << getLength(name);
    return 0;
}