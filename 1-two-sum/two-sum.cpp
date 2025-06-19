class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0 , j = 1;
        vector<int>idx;
        while(i < j and j < nums.size()){
            if(nums[i] + nums[j] == target){
                idx.push_back(i) , idx.push_back(j);
                break;  
            }
            else if(nums[i] + nums[j] != target){
                j++;
            }
            if(j == nums.size())i++,j = i + 1;
        }
        return idx;
    }
};
