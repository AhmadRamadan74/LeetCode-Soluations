class Solution {
public:
    vector<int> intersection(vector<int>& arr, vector<int>& arr2) {
        set<int>s1, s2;
        for(auto i: arr) s1.insert(i);
        for(auto i: arr2) s2.insert(i);
        vector<int>ans;
        for(auto i : s1) {
            for(auto j: s2){
                if(i == j) ans.push_back(j);
            }
        }
        return ans;
    }
};