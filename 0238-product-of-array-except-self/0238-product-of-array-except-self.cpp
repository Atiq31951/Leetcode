class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> lr, rl, ans;
        int len = nums.size() - 1;
        int j = len, rlMul = 1, lrMul = 1;

        for(int i = 0; i <= len; i++) {
            lr.push_back(1);
            rl.push_back(1);
        }

        for(int i = 0; i <= len; i++) {
            lr[i] = lrMul * nums[i];
            rl[j] = rlMul * nums[j];

            lrMul = lr[i];
            rlMul = rl[j];
            j--;
        }

        for(int i = 0; i <= len; i++) {
            if(!i) {
                ans.push_back(rl[i + 1]);
            } else if(i == len) {
                ans.push_back(lr[i - 1]);
            } else {
                ans.push_back(lr[i - 1] * rl[i + 1]);
            }
        }

        return ans;
    }
};
