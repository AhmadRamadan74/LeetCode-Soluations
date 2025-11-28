class Solution {
public:
    int countKeyChanges(string s) {
        int ans = 0;
        for(int i = 1 ; i < s.size(); i++)
            ans += toupper(s[i]) != toupper(s[i - 1]);
        return ans;
    }
};