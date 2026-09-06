class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int size = nums.size();

        for(int i = 0; i < size; i++) {
            int need = target - nums[i];
            if(mp.count(need)) return {i, mp[need]};
            mp[nums[i]] = i;
        }

        return {};
    }
};