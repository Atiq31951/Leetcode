class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        if (size == 1)
            return strs[0];
        int index = 0;
        string ans = "";

        while (true) {
            for (int i = 0; i < size - 1; i++) {
                if (strs[i].size() <= index ||
                    strs[i][index] != strs[i + 1][index])
                    return ans;
            }
            ans += strs[0][index++];
        }

        return ans;
    }
};