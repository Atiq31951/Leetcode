class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                swap(nums[i], nums[i - sum]);
            } else {
                sum++;
            }
        }

        return nums.size() - sum;
    }
};