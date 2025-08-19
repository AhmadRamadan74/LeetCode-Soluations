class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        map<int , int>freq;
        for(auto i : nums) freq[i]++;
        for(auto  i : freq) {
            if(i.second > 1) return true;
        }
        return false;
    }
};