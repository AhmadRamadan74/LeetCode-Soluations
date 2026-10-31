#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& arr) {
        vector<int>ans;
        int rightSum = accumulate(arr.begin(), arr.end(), 0);
        int leftSum = 0;
        for(int i = 0;  i < arr.size(); i++) {
            rightSum -= arr[i];
            ans.push_back(abs(rightSum - leftSum)); 
            leftSum += arr[i];
        }
        return ans;
    }
};