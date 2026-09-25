#include <bits/stdc++.h>
class Solution {
public:
    int minOperations(vector<int>& arr, int k) {
        int all = accumulate(arr.begin(), arr.end(), 0);
        int cnt = 0;
        while(all % k != 0) all--,cnt++;
        return cnt;
    }
};