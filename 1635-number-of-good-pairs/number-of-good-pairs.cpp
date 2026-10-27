class Solution {
public:
    int numIdenticalPairs(vector<int>& arr) {
        vector<pair<int,int>>vp;
        int n = arr.size();
        for(int i = 0; i < n ;i++) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) vp.push_back({i , j});
            }
        }
        return vp.size();
    }
};