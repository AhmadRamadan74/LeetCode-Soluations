class Solution {
public:
    vector<int> sumZero(int n) {
    if(n % 2 == 1) {
        vector<int>arr;
        int x = n / 2;
        for(int i = -1 * x ; i < 0 ; i++) arr.push_back(i);
        for(int i = 0 ; i <= x ; i++)arr.push_back(i);
        return arr;
    }
    else{
        vector<int>arr;
        int x = n / 2;
        for(int i = -1 * x ; i < 0 ; i++) arr.push_back(i);
        for(int i = 1 ; i <= x ; i++)arr.push_back(i);
        return arr;
        }
    }
};