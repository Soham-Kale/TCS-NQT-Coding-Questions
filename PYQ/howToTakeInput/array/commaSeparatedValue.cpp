#include<bits/stdc++.h>
using namespace std;

int main() {
    // solve --> "1,2,3,4,5,6"
    // stringstream  --> '1','2' 
    // array[] ->
    
    string str;
    getline(cin, str);
    stringstream  ss(str);
    
    vector<int>arr;
    string temp;
    
    while(getline(ss, temp, ',')) {
        int num = stoi(temp);    // string to integer
        arr.push_back(num);
    }
    
    for(int a: arr) {
        cout << a << " ";
    }
    return 0;
}