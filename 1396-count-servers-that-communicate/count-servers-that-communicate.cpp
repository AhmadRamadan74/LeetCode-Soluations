#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int>cnt_row(grid.size() , 0) , cnt_col(grid[0].size() , 0);
        int ans = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if(grid[i][j])
                    cnt_row[i]++, cnt_col[j]++ , ans++;
            }
        }

        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if(grid[i][j] && (cnt_row[i] == 1 && cnt_col[j] == 1))
                    ans--;
            }
        }
        return ans;
    }
};