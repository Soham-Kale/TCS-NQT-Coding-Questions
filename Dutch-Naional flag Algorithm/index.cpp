class Solution {
public:
    void sortColors(vector<int>& nums) {

        int i = 0;
        int j = 0;
        int k = nums.size() - 1;

        while(j <= k) {
            if(nums[j] == 1)  {
                j++;
            } else if(nums[j] == 2) {
                swap(nums[j], nums[k]);
                k--;
            } else {
                swap(nums[j], nums[i]);
                j++;
                i++;
            }
        }

        // for(int i=0; i<nums.length; i++) {
        //     cout << nums[i];
        // }

        for(int ele: nums) {
            cout << ele;
        }
    }
};