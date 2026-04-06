class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        int start = 0, end = 0, temp = 0;

        for(int i=1; i<nums.size(); i++) {
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
        return maxSum;
    }
};