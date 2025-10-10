class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        vector<int> dp(energy.size());
        for (int i = 0; i < dp.size(); i++) {
            if (i >= k) {
                dp[i] = max(energy[i], energy[i] + dp[i - k]);
            } else {
                dp[i] = energy[i];
            }
        }
        int maxi = INT_MIN;
        for (int i = dp.size() - k; i < dp.size(); i++) {
            maxi = max(maxi, dp[i]);
        }
        return maxi;
    }
};