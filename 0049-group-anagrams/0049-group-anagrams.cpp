class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        int chars[26] = {};

        for(string str : strs) {
            memset(chars, 0, sizeof(chars));

            for(char c : str) {
                chars[c - 'a']++;
            }

            cout<<"Hello"<<endl;

            string ss = "";
            for(int i = 0; i < 26; i++) {
                if(chars[i]) {
                    for(int j = 0; j < chars[i]; j++) ss += char('a' + i);
                }
            }

            mp[ss].push_back(str);
        }

        vector<vector<string>> ans;

        for(auto m : mp) {
            ans.push_back(m.second);
        }

        return ans;
    }
};
