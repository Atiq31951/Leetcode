class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> rl, ans;
        int len = nums.size() - 1;
        int j = len, rlMul = 1, lrMul = 1;

        for(int i = 0; i <= len; i++) {
            rl.push_back(1);
        }

        for(int i = len; i >= 0; i--) {
            rl[i] = rlMul * nums[i];
            rlMul = rl[i];
        }

        for(int i = 0; i <= len; i++) {
            if(!i) {
                ans.push_back(rl[i + 1]);
            } else if(i == len) {
                ans.push_back(lrMul);
            } else {
                ans.push_back(lrMul * rl[i + 1]);
            }
            lrMul = lrMul * nums[i];
        }

        return ans;
    }
};
