class Solution {
public:
    int arraySign(vector<int>& nums) {
       for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) nums[i] = 1;
            if(nums[i] < 0) nums[i] = -1;
            else if(nums[i] == 0) nums[i] = 0;
       }
       int ans = nums[0];
       for(int i = 1;  i < nums.size(); i++){
            ans *= nums[i];
       }
       return ans;
    }
};