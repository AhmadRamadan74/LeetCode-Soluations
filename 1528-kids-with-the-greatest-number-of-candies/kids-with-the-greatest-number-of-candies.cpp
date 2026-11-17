class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>res;
        for(auto i: candies) {
            bool flag = true;
            int curr = i + extraCandies;
            for(auto j: candies) {
                if(curr < j) {
                    flag = false;
                    break;
                } 
            }
            res.push_back((flag)? true : false);
        }
        return res;

    }
};