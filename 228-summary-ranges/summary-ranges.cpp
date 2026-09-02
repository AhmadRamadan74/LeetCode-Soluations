class Solution {
public:
    vector<string> summaryRanges(vector<int>& arr) {
        int n = arr.size();
        vector<string>res;
        for(int i = 0; i < n; i++) {
            int start = arr[i];
            while(i + 1 < n && arr[i + 1] == arr[i] + 1) i++;
            if(start == arr[i]) res.push_back(to_string(start));
            else {
                res.push_back(to_string(start) + "->" + to_string(arr[i]));
            }
        }
        return res;
    }
};