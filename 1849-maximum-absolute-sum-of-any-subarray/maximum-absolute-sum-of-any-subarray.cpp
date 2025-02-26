class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int min_point = 0 ,  max_point = 0 ,  prefix_sum = 0;
        for(int i: nums){
            prefix_sum += i;
            min_point = min(min_point,prefix_sum) , max_point = max(max_point,prefix_sum);
        }
        return max_point - min_point;
    }
};