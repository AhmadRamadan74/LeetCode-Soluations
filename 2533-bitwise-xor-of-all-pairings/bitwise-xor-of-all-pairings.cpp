#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    long long xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
        int a = nums1.size(), b = nums2.size();
        int res = 0;
        if(b & 1) {
            for(auto i : nums1)
                res ^= i;
        }
        if(a & 1) {
            for(auto i : nums2)
                res ^= i;
        }
        return res;
    }
};