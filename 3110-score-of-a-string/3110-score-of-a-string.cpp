class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0, i;
        for(i = 1; i < s.size(); i++) {
            sum += abs(s[i] - s[i -1]);
        }
        return sum;
    }
};