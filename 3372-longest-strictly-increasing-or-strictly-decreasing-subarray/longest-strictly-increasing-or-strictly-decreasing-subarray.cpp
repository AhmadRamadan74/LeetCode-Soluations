class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.empty())
            return 0;

        int n = nums.size(), mx = 1 ,  inc = 1;
        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[i - 1])
                inc++ , mx = max(mx, inc);
            else
                inc = 1;
        }

        int dec = 1;
        for (int i = 1; i < n; ++i) {
            if (nums[i] < nums[i - 1])
                dec++ , mx = max(mx, dec);
            else
                dec = 1;
        }
        return mx;
    }
};