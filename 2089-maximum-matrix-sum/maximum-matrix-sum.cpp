class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0, cnt = 0,mini = LONG_LONG_MAX,n = matrix.size(),m = matrix[0].size();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                sum += abs(matrix[i][j]);
                if(matrix[i][j] < 0) cnt++;
                mini = min(mini, (long long) abs(matrix[i][j]));
            }
        }
        
        if(cnt % 2) sum -= 2 * mini;
        return sum;
    }
};