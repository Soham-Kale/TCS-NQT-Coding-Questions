#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int n; 
    cin >> n; 
    int arr[n]; 

    // Create a frequency map to count the occurrences of each element
    unordered_map<int, int> freq;

    for(int i=0; i<n; i++) { 
        cin >> arr[i]; 

        // Increment the frequency count for the current element
        freq[arr[i]]++; 
    } 
    
    // Initialize variables to track the minimum and maximum frequency and their corresponding elements
    int minFreq = INT_MAX , maxFreq = INT_MIN; 

    // Initialize minElement and maxElement to the first element of the array
    int minElement = arr[0], maxElement = arr[0]; 

    // Iterate through the frequency map to find the minimum and maximum frequency elements
    for(auto it: freq) { 
        // Update the minimum frequency and corresponding element if a lower frequency is found
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