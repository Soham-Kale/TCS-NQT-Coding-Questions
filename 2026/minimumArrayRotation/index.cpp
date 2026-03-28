#include <bits/stdc++.h>
using namespace std;

int minRotations(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();

    // Step 1: create temp array
    vector<int> temp = arr1;
    temp.insert(temp.end(), arr1.begin(), arr1.end());

    // Step 2: find arr2 in temp
    for (int i = 0; i < n; i++) {
        bool match = true;

        for (int j = 0; j < n; j++) {
            if (temp[i + j] != arr2[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            int left = i;
            int right = n - i;
            return min(left, right);
        }
    }

    return -1; // not possible
}

int main() {
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {3,4,5,1,2};

    cout << minRotations(arr1, arr2);
}