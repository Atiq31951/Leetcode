class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size() - 1;
        int maxx = max(-1, arr[size]), val;
        arr[size] = -1;
        for(int i = size -1; i >= 0; i--) {
            val = arr[i];
            arr[i] = maxx;
            maxx = max(val, maxx);
        }

        return arr;
    }
};