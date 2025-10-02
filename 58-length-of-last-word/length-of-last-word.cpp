#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(!s.empty() && s[s.size() - 1] == ' '){
            int i = s.size() - 1;
            while(s[i] == ' ') i--;
            string ans = "";
            while(i >= 0 and s[i] != ' ') {
                ans.push_back(s[i]), --i;
            }
            return ans.size();
        }
        else{
            string ans = "";
            for (int i = s.size() - 1; i >= 0; --i) {
                if(s[i] != ' ') ans.push_back(s[i]);
                else break;
            }
            return ans.size();
        }
    }
};
