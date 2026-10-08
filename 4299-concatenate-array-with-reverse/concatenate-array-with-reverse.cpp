#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& arr) {
        for(int i = arr.size() - 1; i >= 0; i--) arr.push_back(arr[i]);
        return arr;
    }
};