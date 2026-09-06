class Solution {
public:
    vector<int> intersection(vector<int>& arr, vector<int>& arr2) {
       set<int>st;
       vector<int>res;
       for(auto i : arr) st.insert(i);
       for(auto u : arr2) {
        if(st.find(u) != st.end()) 
            res.push_back(u), st.erase(u);
       }
       return res;
    }
};