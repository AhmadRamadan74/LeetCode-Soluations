class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        vector<int>res;
        unordered_set<int>st(arr.begin(), arr.end());
        for(int i = 1; i <= arr.size(); i++) {
            if(!st.count(i)) {
                res.push_back(i);
            }
        }
        return res;
    }
};