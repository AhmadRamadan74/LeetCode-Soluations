class Solution {
public:
    int sumCounts(vector<int>& arr) {
        int ans = 0;
        set<int>st;
        for(int i = 0; i < arr.size(); i++) {
            for(int j = i; j < arr.size(); j++) {
                st.insert(arr[j]);
                ans += st.size() * st.size();
            }
            st.clear();
        } 
        return ans;
    }
};