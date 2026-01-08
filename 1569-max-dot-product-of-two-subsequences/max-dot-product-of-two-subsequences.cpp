class Solution {
public:
    int maxDotProduct(vector<int>& a, vector<int>& b) {
        int n = a.size(), m = b.size();
        const int NEG_INF = -1e9;
        auto allNeg = [](vector<int>& v) {
            for (int x : v) if (x >= 0) return false;
            return true;
        };
        auto allPos = [](vector<int>& v) {
            for (int x : v) if (x <= 0) return false;
            return true;
        };
        if (allNeg(a) && allPos(b))
            return *max_element(a.begin(), a.end()) * *min_element(b.begin(), b.end());
        if (allNeg(b) && allPos(a))
            return *max_element(b.begin(), b.end()) * *min_element(a.begin(), a.end());
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, NEG_INF));
        function<int(int,int)> f = [&](int i, int j) -> int {
            if (i == n || j == m) return NEG_INF;
            if (dp[i][j] != NEG_INF) return dp[i][j];
            int prod = a[i] * b[j];
            return dp[i][j] = max({
                prod,                 
                prod + f(i + 1, j + 1),  
                f(i + 1, j),              
                f(i, j + 1)               
            });
        };
        return f(0, 0);
    }
};
