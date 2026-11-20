class Solution {
public:
    int getMax3x3(int centerX, int centerY, vector<vector<int>>& grid){
        const int N = grid.size();
        if(centerX == 0 || centerY == 0 || centerX == N - 1 || centerY == N - 1){
            return -1;
        }
        //14141
        //41235
        //43X35
        //54565
        //11111
        /// [row1, row2] -> [col1, col2]
        int maxElement = 0;
        for(int i = centerX - 1; i <= centerX + 1; i++){
            for(int j = centerY - 1; j <= centerY + 1; j++){
                maxElement = max(maxElement, grid[i][j]);
            }
        }
        return maxElement;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        const int N = grid.size();
        vector<vector<int>> maxLocal;
        for(int i = 1; i < N - 1; i++){
            maxLocal.emplace_back();
            for(int j = 1; j < N - 1; j++){
                int cur = getMax3x3(i, j, grid);
                maxLocal.back().push_back(cur);
            }
        } 
        return maxLocal;
    }
};