class Solution {
public:
    int minElement(vector<int>& arr) {
        int mn = INT_MAX;
        for(int i = 0; i < arr.size(); i++) {
            int sum = 0;
            while(arr[i] != 0) {
                sum += arr[i] % 10;
                arr[i] /= 10;
            }
            mn = min(mn, sum);
        }
        return mn;
    }
};