#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int sz = nums.size();
        vector<pair<int, int>> vp;
        for (int i = 0; i < sz; ++i)
            vp.push_back({nums[i], i});
        sort(vp.begin(), vp.end());
        int l = 0, r = 1;
        while (r < sz) {
            vector<int> pos = {vp[l].second};
            while (r < sz and abs(vp[r].first - vp[r - 1].first) <= limit) {
                pos.push_back(vp[r].second);
                r++;
            }
            sort(pos.begin(), pos.end());
            for (int i = 0; i < r - l; i++) {
                nums[pos[i]] = vp[l + i].first;
            }
            l = r;
            r++;
        }
        return nums;
    }
};