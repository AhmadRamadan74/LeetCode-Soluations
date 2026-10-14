class Solution {
public:
    vector<int> pivotArray(vector<int>& arr, int pivot) {
        vector<int> less, equal, greater;
        
        for (int x : arr) {
            if (x < pivot) less.push_back(x);
            else if (x > pivot) greater.push_back(x);
            else equal.push_back(x);
        }
        
        vector<int> res;
        res.insert(res.end(), less.begin(), less.end());
        res.insert(res.end(), equal.begin(), equal.end());
        res.insert(res.end(), greater.begin(), greater.end());
        
        return res;
    }
};