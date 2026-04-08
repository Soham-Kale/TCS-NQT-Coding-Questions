#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int n; 
    cin >> n; 
    int arr[n]; 

    unordered_map<int, int> freq;
    for(int i=0; i<n; i++) { 
        cin >> arr[i]; 
        freq[arr[i]]++; 
    } 
    
    int minFreq = INT_MAX , maxFreq = INT_MIN; 
    int minElement = arr[0], maxElement = arr[0]; 

    for(auto it: freq) { 
        if(it.second < minFreq) { 
            minFreq = it.second; minElement = it.first; 
        } 
    } 

    for(auto it: freq) {
        if(it.second > maxFreq) {
            maxFreq = it.second; maxElement = it.first; 
        }
    }
    
    cout << minElement << " " << maxElement; 
    return 0; 
}