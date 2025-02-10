#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        int i = 0;
        while (i < s.size()) {
            if (i + 1 < s.size() && isalpha(s[i]) && isdigit(s[i + 1])) {
                s.erase(i, 2);
                if (i > 0)
                    i--;
            }
            else
                i++;
        }
        return s;
    }
};