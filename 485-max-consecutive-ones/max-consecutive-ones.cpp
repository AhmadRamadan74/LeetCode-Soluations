class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int cnt = 0, mx = 0;
        for(auto i: arr) {
            if(i == 1) cnt++, mx = max(mx , cnt);
            else cnt = 0;
        }
        return mx;
    }
};