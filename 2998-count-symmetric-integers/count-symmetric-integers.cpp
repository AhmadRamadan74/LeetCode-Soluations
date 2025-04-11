class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;

        for(int i = low; i <= high; i++) {
            string s = to_string(i);
            if(s.size() & 1) 
                continue;
            int lSum = 0,  rSum = 0;
            for(int i = 0; i < s.size() / 2; i++) {
                lSum += s[i] - '0';
            }
            for(int i = s.size() / 2; i < s.size(); i++) {
                rSum += s[i] - '0';
            }
            if(lSum == rSum) {
                ans++;
            }
        }
        return ans;
    }
};