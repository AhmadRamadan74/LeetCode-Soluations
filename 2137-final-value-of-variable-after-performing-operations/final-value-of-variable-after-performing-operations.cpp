class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = 0;
        for(auto i: operations) {
            if(i == "--X") --n;
            else if(i == "X--") n--;
            else if(i == "++X") ++n;
            else n++; 
        }
        return n;
    }
};