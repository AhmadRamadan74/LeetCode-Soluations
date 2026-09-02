class Solution {
public:
    int missingNumber(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        bool flag = false;
        int ans;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] != i) {
                ans = i;
                flag = true;
                break;
            }
        }
        return ((flag) ? ans : arr.back() + 1);
    }
};