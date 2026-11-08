class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        ios_base::sync_with_stdio(false);
		cin.tie(NULL);
        vector<int>vis(26, 0);
        for(int i = 0; i < allowed.size(); i++) vis[allowed[i] - 'a'] = 1;
        int ans = 0;
        for(auto w: words) {
        bool flag = true;
            for(auto c: w) {
                if(vis[c - 'a'] != 1) {
                    flag = false;
                    break;
                }
            }
            if(flag) ans++;
        }
        return ans;
    }
};