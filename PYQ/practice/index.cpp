#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    
    vector<int>arr;
    
    stringstream ss(a);
    string token;
    
    while(getline(ss, token, ',')) {
        int num = stoi(token);
        arr.push_back(num);
    }
    
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}