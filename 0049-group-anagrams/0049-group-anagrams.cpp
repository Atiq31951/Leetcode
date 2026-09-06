class Solution {
public:
    string makeSorted(string str) {
        int charArr[26];
        memset(charArr, 0, sizeof(charArr));
        string sortedStr = "";

        for(char ch : str) charArr[ch - 97]++;

        for(int i = 0; i < 26; i++) {
            for(int j = 0; j < charArr[i]; j++) {
                sortedStr += 'a' + i;
            }
        }

        return sortedStr;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> vmp;
        string sorted = "";

        vector<vector<string>> ans;

        for(int i = 0; i < strs.size(); i++) {
            sorted = makeSorted(strs[i]);
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