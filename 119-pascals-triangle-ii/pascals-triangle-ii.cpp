class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res(34);
        for (int lvl = 0; lvl < 34; lvl++) {
            res[lvl].resize(lvl + 1);
            res[lvl].front() = res[lvl].back() = 1;
            for (int i = 1; i + 1 < res[lvl].size(); i++) {
                res[lvl][i] = res[lvl - 1][i] + res[lvl - 1][i - 1];
            }
        }
        return res[rowIndex];
    }
};