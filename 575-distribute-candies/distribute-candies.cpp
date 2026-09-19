class Solution {
public:
    int distributeCandies(vector<int>& arr) {
        int n = arr.size();
        set<int>st;
        for(auto i: arr) st.insert(i);
        int sz = st.size();
        return min(sz, n / 2);
    }
};