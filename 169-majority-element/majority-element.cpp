class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>freq;
        for(auto i : nums) freq[i]++;
        for(auto i : nums){
            if(freq[i] > n / 2) return i;
        }
        return {};   
    }
};