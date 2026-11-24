class Solution {
public:
    bool isPlaindrome(int n) {
        string s = to_string(n);
        bool flag = true;
        int i = 0, j = s.size() - 1;
        while(i < j) {
            if(s[i] == s[j]) j--;
            else {
                flag = false;
                break;
            }
            i++;
        }
        return flag;
    }

    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(isPlaindrome(x)) return true;
        else return false;
    }
};