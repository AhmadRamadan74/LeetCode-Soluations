class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int n = arr.size() - 1;
        for(int i = n; i >= 0; i--) {
            if(arr[i] < 9) {
                arr[i]++;
                return arr;
            }
            arr[i] = 0;
        }
        arr.insert(arr.begin(), 1);
        return arr;
    }
};