#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    unordered_map<int, int> freq;
    
    // count frequency of each product ID's
    for(int i=0; i<n; i++) {
        freq[arr[i]]++;
    }
    
    int maxFreq = 0;
    int result = 0;
    
    for(auto & it: freq) {
        int id = it.first;
        int count = it.second;
        
        if(count > maxFreq) {
            maxFreq = count;
            result = id;
        } 
        else if(count == maxFreq && id < result) {
            id = result;
        }
        cout << count;
    }
    
    return 0;
}