class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int st = 4;
        vector<int>arr = score;
        vector<string>s = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        sort(arr.begin(), arr.end()), reverse(arr.begin(), arr.end());
        map<int ,string>mp;
        int cnt = 3, it = 0;
        for(auto i: arr) {
            if(cnt > 0) {
                mp[i]  = s[it]; // 0 .1 . 2
                cnt--,it++;
            }
            else {
                mp[i] = to_string(st);
                st++;
            }
        }
        vector<string>ans;
        for(auto i: score) {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};