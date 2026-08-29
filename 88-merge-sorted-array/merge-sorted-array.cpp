class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        for(int j = 0, i = m; j < n; j++) 
            a[i] = b[j], i++;
        sort(a.begin(), a.end());    
    }
};