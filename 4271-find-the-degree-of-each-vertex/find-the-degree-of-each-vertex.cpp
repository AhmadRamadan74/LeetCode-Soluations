class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans;
        for(auto i: matrix) {
            int sum = 0;
            for(auto j: i) sum += j;
            ans.push_back(sum); 
        }
        return ans;
    }
};