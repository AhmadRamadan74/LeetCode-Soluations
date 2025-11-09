class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        // vector<int>ans;
        sort(nums.begin() , nums.end()); // 2 3 4 5
        for(int i = 0 ; i < nums.size() - 1; i+=2) {
            swap(nums[i] , nums[i + 1]);
        }
        return nums;
    }
};