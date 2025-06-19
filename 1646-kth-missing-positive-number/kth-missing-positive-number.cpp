class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cnt = 0, ans = 1,i = 0;
        while (cnt < k) {
            if (i < arr.size() and arr[i] == ans) {
                i++; 
            } else {
                cnt++; 
                if (cnt == k)
                    return ans;
            }
            ans++;
        }
        return 0; 
    }
};