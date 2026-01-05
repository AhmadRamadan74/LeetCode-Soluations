class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int n , m;
        m = num - 2 * t, n = num + 2 * t;
        return max(m,n);
    }
};