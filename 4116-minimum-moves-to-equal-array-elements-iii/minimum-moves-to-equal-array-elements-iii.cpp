class Solution {
public:
    int minMoves(vector<int>& arr) {
        int n = arr.size() - 1, sum = 0;
        sort(arr.begin(), arr.end());
        for(auto i: arr) {
            sum += arr[n] - i;
        }
        return sum;
    }
};