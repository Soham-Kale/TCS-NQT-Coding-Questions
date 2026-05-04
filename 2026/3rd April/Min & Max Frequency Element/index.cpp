#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int n; 
    cin >> n; 
    int arr[n]; 

    // Create a frequency map to count the occurrences of each element
    unordered_map<int, int> freq;
    vector<int> order; // stores unique elements in order

    for(int i=0; i<n; i++) { 
        cin >> arr[i]; 

        freq[arr[i]]++; 
    } 
    
    int minFreq = INT_MAX , maxFreq = INT_MIN; 
    int minElement = arr[0], maxElement = arr[0]; 

    // Iterate through the frequency map to find the minimum and maximum frequency elements
    for(auto it: freq) { 
        if(it.second < minFreq) { 
            minFreq = it.second; 
            minElement = it.first; 
        } 
    } 

    for(auto it: freq) {
        if(it.second > maxFreq) {
            maxFreq = it.second; 
            maxElement = it.first; 
        }
    }
    
    cout << minElement << " " << maxElement; 
    return 0; 
}