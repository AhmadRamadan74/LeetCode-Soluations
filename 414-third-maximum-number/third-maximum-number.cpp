class Solution {
public:
    int thirdMax(vector<int>& arr) {
        set<int>st;
        for(auto i: arr) st.insert(i);
        if(st.size() >= 3) {
            int mx1, mx2, mx3;
            mx1 = mx2 = mx3 = INT_MIN;
            for(auto i: st) mx1 = max(mx1, i);
            st.erase(mx1);
            for(auto i: st) mx2 = max(mx2, i);
            st.erase(mx2);
            for(auto i: st) mx3 = max(mx3, i);
            return mx3;
            
        }
        else return *max_element(arr.begin(), arr.end());
    }
};