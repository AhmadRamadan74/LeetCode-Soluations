class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if(strs.size() == 1) return strs[0];
        sort(strs.begin(), strs.end());
        string i = strs[0], j = strs[strs.size() - 1];
        for (int u = 0; u < min(i.size() , j.size()); u++) {
            if (i[u] != j[u]) return ans;
            ans += i[u];
        }
        return ans;
    }
};