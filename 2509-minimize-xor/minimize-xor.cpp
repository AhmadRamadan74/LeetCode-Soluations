#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int ones = __builtin_popcount(num2);
        int ans = 0;
        for (int i = 31; i >= 0 && ones; --i) {
            if(num1 & (1 << i))
                ones-- ,ans += (1 << i);
        }
        for(int i = 0 ; i <= 31 && ones; i++){
            if((num1 & (1 << i)) == 0)
                ones-- , ans += (1 << i);
        }
        return ans;
    }
};
