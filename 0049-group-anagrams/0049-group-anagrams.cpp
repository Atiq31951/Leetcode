class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> vmp;
        string sorted = "";

        vector<vector<string>> ans;

        for(int i = 0; i < strs.size(); i++) {
            sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            vmp[sorted].push_back(strs[i]);
        }

        auto mp = vmp.begin();

        while (mp != vmp.end()) {
            ans.push_back(mp -> second);
            mp++;
        }

        return ans;
    }
};