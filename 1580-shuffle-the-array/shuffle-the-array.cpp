class Solution {
public:
    vector<int> shuffle(vector<int>& arr, int n) {
        vector<int>f,l,ans;
        for(int i = 0; i < n; i++) f.push_back(arr[i]);
        for(int i = n; i < n * 2; i++) l.push_back(arr[i]);
        for(int i = 0; i < n; i++) ans.push_back(f[i]), ans.push_back(l[i]); 
        return ans;
    }
};