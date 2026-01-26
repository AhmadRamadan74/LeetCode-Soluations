class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int A = 0 , B = 0;
        for(auto i : nums) {
            if(i < 10) A+=i;
            else B+=i;
        }
        return A != B;
    }
};