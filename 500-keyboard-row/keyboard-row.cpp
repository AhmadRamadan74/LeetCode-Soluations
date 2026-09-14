#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int row[26];
        string r1 = "qwertyuiop";
        string r2 = "asdfghjkl";
        string r3 = "zxcvbnm";
        for(auto i: r1) row[i - 'a'] = 1; // mark every row with the number
        for(auto j: r2) row[j - 'a'] = 2;
        for(auto k: r3) row[k - 'a'] = 3;
        vector<string>ans;
        for(auto &i: words) {
            int targetRow = row[tolower(i[0]) - 'a'];
            bool validWord = true;
            for(auto j: i) {
                if(row[tolower(j) - 'a'] != targetRow) {
                    validWord = false;
                    break;
                }
            }
            if(validWord) {
                ans.push_back(i);
            }
        }
        return ans;

    }
};