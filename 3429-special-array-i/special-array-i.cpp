#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size() , ans = 0;

        for (int i = 0; i < n - 1; ++i) {
            if((nums[i] % 2 == 0) && (nums[i + 1] % 2 == 1))
                ans++;
            else if((nums[i] % 2 == 1) && (nums[i + 1] % 2 == 0))
                ans++;
        }

        return ans + 1 == n;
    }
};