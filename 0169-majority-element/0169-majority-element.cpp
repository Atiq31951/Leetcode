class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxSum = 1, currSum = 1, whoMax = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                currSum++;

                if (maxSum <= currSum) {
                    whoMax = nums[i];
                    maxSum = currSum;
                }
            } else {
                currSum = 1;
            }
        }

        return whoMax;
    }
};