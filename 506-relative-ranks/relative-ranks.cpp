class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int, int>>vp;
        int n = score.size();
        for(int i = 0; i < n; i++) {
            vp.emplace_back(score[i], i);
        }
        sort(vp.rbegin(), vp.rend());
        vector<string>ans(n);
        for(int i = 0; i < n; i++) {
            int index = vp[i].second;
            if(i == 0) ans[index] = "Gold Medal";
            else if(i == 1) ans[index]= "Silver Medal";
            else if(i == 2) ans[index]= "Bronze Medal";
            else {
                ans[index] = to_string(i + 1);
            }
        }
        return ans;
    }
};