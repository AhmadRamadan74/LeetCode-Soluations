class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sumOfNums = 0;
        for(auto i : nums) sumOfNums += i;
        int sumOfDigits = 0;
        for(int i = 0;  i < nums.size() ; i++) {
            string s = to_string(nums[i]);
            for(int j = 0;  j < s.size(); j++){
                sumOfDigits += s[j] - '0';
            }
        }
        return abs(sumOfNums - sumOfDigits);
    }
};