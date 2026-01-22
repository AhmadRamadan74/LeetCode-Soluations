class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int cnt = 0;
        while (!is_sorted(nums.begin(), nums.end())) {
            int minSum = INT_MAX,idx = 0;
            for (int i = 0; i < nums.size() - 1; i++) {
                int s = nums[i] + nums[i + 1];
                if (s < minSum) {
                    minSum = s;
                    idx = i;
                }
            }
            nums[idx] = minSum;
            nums.erase(nums.begin() + idx + 1);
            cnt++;
        }
        return cnt;
    }
};
