class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int mx = *max_element(nums.begin() , nums.end());
        vector<int>store , ans;
        for(int i = nums[0] ; i <= mx; i++){
            store.push_back(i);
        }

        int i = 0 , j = 0;
        while(i < nums.size() and j < store.size()){
            if(nums[i] == store[j]) i++ , j++;
            else if(nums[i] != store[j]) ans.push_back(store[j]) , j++;
        }
        return ans;
    }
};