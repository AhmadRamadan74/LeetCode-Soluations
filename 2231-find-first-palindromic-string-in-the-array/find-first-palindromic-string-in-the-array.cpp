class Solution {
    bool isPalindrome(string s) {
        for(int i = 0 , j = s.size() - 1 ; i < s.size(); i++ , j--){
            if(s[i] == s[j]) i++ , j--;
            else return false;
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(auto i : words) {
            if(isPalindrome(i)) return i;
        }
        return "";
    }
};