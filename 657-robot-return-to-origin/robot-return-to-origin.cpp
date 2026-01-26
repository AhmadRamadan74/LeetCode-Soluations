class Solution {
public:
    bool judgeCircle(string moves) {
        int u = 0 , d = 0 , r = 0 , l = 0;
        for(auto i : moves) {
            if(i == 'R') r++;
            if(i == 'L') l++;
            if(i == 'U') u++;
            if(i == 'D') d++;
        }
        return d == u and l == r;
    }
};