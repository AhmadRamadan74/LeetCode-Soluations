class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>mxAns;
        for(auto i : accounts){
            int sum = 0;
            for(auto j : i) {
                sum += j;
            }
            mxAns.push_back(sum);
        }
        return *max_element(mxAns.begin() , mxAns.end());
    }
};