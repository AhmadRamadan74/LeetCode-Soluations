#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> track;
        for (int i = 0; i < operations.size(); i++) {
            // Handle digits and negative numbers
            if (isdigit(operations[i][0]) || (operations[i].size() > 1 && operations[i][0] == '-')) {
                track.push_back(stoi(operations[i]));
            } 
            else if (operations[i] == "C") {
                if (!track.empty()) track.pop_back();
            } 
            else if (operations[i] == "D") {
                if (!track.empty()) track.push_back(track.back() * 2);
            } 
            else if (operations[i] == "+") {
                if (track.size() >= 2) {
                    int last = track[track.size() - 1];
                    int secondLast = track[track.size() - 2];
                    track.push_back(last + secondLast);
                }
            }
        }

        int ans = 0;
        for (int score : track) {
            ans += score;
        }
        return ans;
    }
};