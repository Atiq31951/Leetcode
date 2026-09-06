class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char, int> mp1;

        for(int i = 0; i < s.length(); i++) {
            mp1[s[i]]++;
            mp1[t[i]]--;
        }

        for(auto x : mp1) {
            if(x.second) return false;
        }

        return true;
    }
};