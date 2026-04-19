#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    
    vector<int>arr;
    string temp;
    
    while(getline(ss, temp, ',')) {
        int num = stoi(temp);    // string to int
        arr.push_back(num);
    }
    
    int i = 0;
    int j = 0;
    int k = arr.size() - 1;

    while(j <= k) {
        if(arr[j] == 1) {
            j++;
        }
        else if(arr[j] == 2) {
            swap(arr[j], arr[k]);
            k--;
        }
        else {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }

    for(int a: arr) {
        cout << a << " ";
    }
    return 0;
}