class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = true;
        }

        int maxx = 0, currMax = 0;
        
        for(auto s : mp) {
            if(mp.count(s.first)) {
                currMax = 1;
                int current = s.first + 1;

                while(mp.count(current)) {
                    mp.erase(current);
                    currMax++;
                    current++;
                }

                current = s.first - 1;
                while(mp.count(current)) {
                    mp.erase(current);
                    currMax++;
                    current--;
                }

                if(currMax > maxx) {
                    maxx = currMax;
                }
            }
        }

        return maxx;
    }
};