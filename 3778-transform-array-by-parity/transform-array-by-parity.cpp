class Solution {
public:
    vector<int> transformArray(vector<int>& arr) {
        for(auto &i: arr) { 
            if(i % 2 == 0) i = 0;
            else i = 1;
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};