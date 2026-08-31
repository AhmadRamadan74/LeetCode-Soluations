class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = ceil(arr.size() / 2);
        map<int, int>mp;
        for(auto i : arr) mp[i]++;
        for(auto i : arr) {
            if(mp[i] > n) return i;
        }
        return 0;
    }
};