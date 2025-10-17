class Solution {
public:
    int climbStairs(int n) {
        int prev = 0 , returnAns = 1;
        for(int i = 0; i < n; i++){
            returnAns = prev + returnAns;
            prev = returnAns - prev;
        }
        return returnAns;
    }
};