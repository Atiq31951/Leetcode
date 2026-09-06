class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0, size1 = t.size(), size2 = s.size();
        while(i < size1 && j < size2) {
            if(t[i] == s[j]) i++;
            j++;
        }

        if(i == size1 && j == size2) return 0;

        if(i < size1) return size1 - i;

        return 0;
    }
};
