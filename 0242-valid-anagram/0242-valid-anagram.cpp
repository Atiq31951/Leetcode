class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        
        unordered_map<char, int> mp;
        int totalChar = s.size();

        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            mp[t[i]]--;
        }

        for(auto m : mp) {
            if(m.second != 0) {
                return false;
            }
        }

        return true;
    }
};