class Solution {
public:
    vector<int> pivotArray(vector<int>& arr, int pivot) {
        int n = arr.size() - 1;
        deque<int>a, b;
        vector<int>middleAns;
        for(auto i: arr) {
            if(i < pivot) a.push_back(i);
            else if(i > pivot) b.push_back(i);
            else middleAns.push_back(i);  
        }
        vector<int>res;
        for(int i = 0; i < a.size(); i++) res.push_back(a[i]);
        for(auto i: middleAns) res.push_back(i);
        for(int i = 0; i < b.size(); i++) res.push_back(b[i]);
        return res;

    }
};