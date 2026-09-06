class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> newArr;
        int numSize = nums.size(), dblSize = numSize *2;
        
        for(int i = 0; i < numSize; i++) {
            newArr.push_back(nums[i]);
        }

        for(int i = numSize; i < dblSize; i++) {
            newArr.push_back(nums[i - numSize]);
        }

        return newArr;
    }
};