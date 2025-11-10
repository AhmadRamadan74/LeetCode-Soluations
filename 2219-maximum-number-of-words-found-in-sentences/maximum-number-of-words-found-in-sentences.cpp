class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(auto i : sentences) {
            int cnt = 1;
            for(auto j : i) {
                if(j == ' ') cnt++;
            }
            ans = max(ans , cnt);
        }
        return ans;
    }
};