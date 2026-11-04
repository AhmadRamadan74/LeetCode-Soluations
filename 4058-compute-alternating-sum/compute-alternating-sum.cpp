class Solution {
public:
    int alternatingSum(vector<int>& arr) {
        int ans = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(i % 2 == 0) ans += arr[i];
            else ans -= arr[i]; 
        }
        return ans;
    }
};