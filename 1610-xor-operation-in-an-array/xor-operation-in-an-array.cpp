class Solution {
public:
    int xorOperation(int n, int start) {
        int xorAns = 0;
        for(int i = 0; i  < n ; i++)
            xorAns ^= (2 * i) + start;
        return xorAns;
    }
};