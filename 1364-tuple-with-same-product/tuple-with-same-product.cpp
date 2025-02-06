class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int mul = nums[i] * nums[j];
                freq[mul]++;
            }
        }

        int ans = 0;
        for (auto& [pr, cnt] : freq) {
            if (cnt >= 2)
                ans += cnt * (cnt - 1) / 2 * 8;
        }

        return ans;
    }
};