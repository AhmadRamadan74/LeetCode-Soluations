class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for (auto s : strs) {
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            mp[sorted_s].push_back(s);
        }

        vector<vector<string>> ans;
        for (auto& [key, group] : mp) {
            ans.push_back(group);
        }

        return ans;
    }
};
