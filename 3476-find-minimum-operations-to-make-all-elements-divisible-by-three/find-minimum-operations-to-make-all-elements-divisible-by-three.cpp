class Solution {
public:
    int minimumOperations(vector<int>& arr) {
        int ch = 0;
        for(auto i: arr) {
            if(i % 3 == 0) ch++;
        }
        return arr.size() - ch;
    }
};