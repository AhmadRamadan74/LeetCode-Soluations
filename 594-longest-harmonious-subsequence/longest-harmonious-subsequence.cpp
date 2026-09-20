class Solution {
public:
    int findLHS(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mxLen = 0, j = 0;
        for(int i = 0; i < arr.size(); i++) {
            while(arr[i] - arr[j] > 1) j++;
            if(arr[i] - arr[j] == 1) mxLen = max(mxLen , abs(j - i) + 1);
        }
        return mxLen;
    }
};