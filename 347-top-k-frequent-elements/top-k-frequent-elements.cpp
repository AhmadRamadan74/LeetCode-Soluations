class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int, int>mp;
       for(auto i : nums){
            mp[i]++;
       }

       vector<vector<int>>store(nums.size() + 1);
       for(auto i : mp){
            store[i.second].push_back(i.first);
       }

       vector<int>res;
       for(int i = store.size() - 1; res.size() < k; i--){
            for(auto i : store[i]){
                res.push_back(i);
            }
       }

       return res;

    }
};
