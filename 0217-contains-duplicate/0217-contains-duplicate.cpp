class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() < 2) {
            return false;
        }

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto m : mp) {
            if(m.second > 1) {
                return true;
            }
        }

        return false;
    }
};