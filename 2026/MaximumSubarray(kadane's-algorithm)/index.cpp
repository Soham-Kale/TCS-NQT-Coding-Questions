#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        int start = 0, end = 0, temp = 0;

        for(int i = 1; i < nums.size(); i++) {
            if(currentSum + nums[i] < nums[i]) {
                currentSum = nums[i];
                temp = i;
            } else {
                currentSum += nums[i];
            }

            if(currentSum > maxSum) {
                maxSum = currentSum;
                start = temp;
                end = i;
            }
        }

        cout << "Subarray index range: " << start << " to " << end << endl;
        return maxSum;
    }
};

int main() {
    cout << "Enter array (space or comma separated): ";

    string line;
    getline(cin, line);

    vector<int> nums;
    string temp = "";

    for(char c : line) {
        if(c == ',' || c == ' ') {
            if(!temp.empty()) {
                nums.push_back(stoi(temp));
                temp = "";
            }
        } else {
            temp += c;
        }
    }
    if(!temp.empty()) nums.push_back(stoi(temp));

    Solution obj;
    int result = obj.maxSubArray(nums);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}