class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string z = s;
        reverse(s.begin() , s.end());
        return z == s;
    }
};