class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& arr) { 
        map<int, int>mp;
        vector<int>found;
        for(auto i: arr) mp[i]++;
        for(auto [f , s] : mp) {
            if(s > 1) found.push_back(f);
        }
        return found;
    }
};