class Solution {
public:
    vector<vector<int>> generate(int n) {
          vector<vector<int>> res(n);
        for (int lvl = 0; lvl < n; lvl++) {
            res[lvl].resize(lvl + 1);
            res[lvl].front() = res[lvl].back() = 1;
            for (int i = 1; i + 1 < res[lvl].size(); i++) {
                res[lvl][i] = res[lvl - 1][i] + res[lvl - 1][i - 1];
            }
        }
        return res;
    }
};