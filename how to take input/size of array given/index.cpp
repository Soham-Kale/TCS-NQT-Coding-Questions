#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> list;

    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        list.push_back(x); 
    }

    // print array
    for(int i=0; i<n; i++) {
        cout << list[i] << " ";
    }

    // another way to print array using for each loop
    for(int x: list) {
        cout << x << " ";
    }
}