class Solution {
public:
    vector<int> intersect(vector<int>& arr, vector<int>& arr2) {
        vector<int>res;
        map<int, int>mp;
        for(auto i: arr) mp[i]++;

        for(auto n: arr2) {
            if(mp[n] > 0) {
                res.push_back(n);
                mp[n]--;
            }
        }
        return res;
    }
};