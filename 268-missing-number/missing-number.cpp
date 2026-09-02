class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int all = n * (n + 1) / 2;
        int sum = 0;
        for(auto i: arr)sum += i;
        return all - sum;
    }
};