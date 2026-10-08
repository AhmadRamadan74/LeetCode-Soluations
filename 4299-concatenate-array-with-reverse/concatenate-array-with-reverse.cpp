#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& arr) {
        vector<int>a = arr;
        reverse(arr.begin(), arr.end());
        vector<int>b = arr;
        vector<int>ans;
        for(auto i: a)ans.push_back(i);
        for(auto i: b)ans.push_back(i);
        return ans;
    }
};