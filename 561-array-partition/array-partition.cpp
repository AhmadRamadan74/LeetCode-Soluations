class Solution {
public:
    int arrayPairSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int res = 0;
        for(int i=0;i<arr.size();i+=2) {
            res += arr[i];
        }
        return res;
    }
};