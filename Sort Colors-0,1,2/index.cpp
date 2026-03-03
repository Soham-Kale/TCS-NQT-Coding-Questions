#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    vector<int> list;
    
    stringstream ss(str);
    vector<int> nums;
    int num;
    
    while(ss >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    
    int i = 0;
    int j = 0;
    int k = n-1;
    
    while(j <= k) {
        if(nums[j] == 1) {
            j++;
        } else if(nums[j] == 2) {
            swap(nums[j], nums[k]);
            k--;
        } else {
            swap(nums[j], nums[i]);
                i++;
                j++;
        }
    }
    
    for(int i=0; i<n; i++) {
        cout << nums[i] << " ";
    }
    
}