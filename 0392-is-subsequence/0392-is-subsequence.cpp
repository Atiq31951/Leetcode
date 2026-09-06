class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (t.size() < s.size())
            return false;

        int next = 0, i = 0;

        while (next < t.size() && i < s.size()) {
            i += s[i] == t[next] ? 1 : 0;
            next++;
        }

        return i == s.size();
    }
};