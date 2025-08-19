class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        map<int,int> hp;

        for (int num : nums) {
            hp[num]++;
        }

        for (auto it : hp) {
            if (it.second >= 2) {
                return true;
            }
        }
        return false;
    }
};