class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int mn = arr[0],mx = INT_MIN;
        for(int i = 1; i < arr.size(); i++) {
            mx = max(mx , arr[i] - mn);
            mn = min(mn , arr[i]);
        }
        if(mx <= -1) return 0;
        else return mx;
    }
};