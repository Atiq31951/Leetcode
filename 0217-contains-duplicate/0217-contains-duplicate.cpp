class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            if(s.count(n)>0)
                return true;
            s.insert(n);
        }

        return false;
    }
};