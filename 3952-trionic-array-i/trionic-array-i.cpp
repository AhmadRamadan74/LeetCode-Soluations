class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size(), p = 0, q = 0, i = 0;
        while (i < n - 1 && nums[i] < nums[i + 1])
            i++;
        p = i;
        while (i < n - 1 && nums[i] > nums[i + 1])
            i++;
        q = i;
        while (i < n - 1 && nums[i] < nums[i + 1])
            i++;
        if (i == n - 1) {
            if (p && q && p != n - 1 && q != n - 1) {
                return true;
            }
            return false;
        }
        return false;
    }
};