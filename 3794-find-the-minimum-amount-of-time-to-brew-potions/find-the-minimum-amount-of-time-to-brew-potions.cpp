class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n = skill.size();
        int m = mana.size();
        if (m == 0) return 0LL;

        vector<long long> pref(n);
        for (int i = 0; i < n; ++i) {
            pref[i] = skill[i] + (i ? pref[i-1] : 0LL);
        }

        long long S = 0LL;
        for (int j = 1; j < m; ++j) {
            long long prev = (long long)mana[j-1];
            long long cur  = (long long)mana[j];
            long long best = LLONG_MIN;
            for (int i = 0; i < n; ++i) {
                long long prev_pref = (i ? pref[i-1] : 0LL);
                long long cand = pref[i] * prev - prev_pref * cur;
                if (cand > best) best = cand;
            }
            S += best;
        }

        long long ans = S + pref[n-1] * (long long)mana[m-1];
        return ans;
    }
};