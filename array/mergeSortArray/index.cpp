#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
    int i = 0, j = 0;
    int k = 0;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    // copy first array k element ko
    while(i < n) {
        arr3[k++] = arr1[i++];
    }

    while(j < m) {
        arr3[k++] = arr1[j++];
    }
}

void print(int ans[], int n) {
    for(int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);

    return 0;
}




// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1;          // last valid in nums1
//         int j = n - 1;          // last in nums2
//         int k = m + n - 1;      // last position in nums1

//         while(i >= 0 && j >= 0) {
//             if(nums1[i] > nums2[j]) {
//                 nums1[k--] = nums1[i--];
//             } else {
//                 nums1[k--] = nums2[j--];
//             }
//         }

//         // copy remaining nums2
//         while(j >= 0) {
//             nums1[k--] = nums2[j--];
//         }
//     }
// };