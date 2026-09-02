#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        // for(int i = 0; i < arr.size(); i++) {
        //     if(arr[i] == 0) arr.push_back(arr[i]), arr.erase(arr.begin() + i);
        // }
        int cnt = 0;
        cnt+=count(arr.begin(), arr.end(), 0);
        arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());
        for(int i = 0; i < cnt; i++) arr.push_back(0);
    }
};