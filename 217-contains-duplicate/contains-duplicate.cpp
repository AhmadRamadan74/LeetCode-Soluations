class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        map<int , int>mp;
        bool flag = false;
        for(auto i : arr) {
            mp[i]++;
            if(mp[i] > 1){
                flag = true;
                break;
            }
        }
        return flag;
    }
};