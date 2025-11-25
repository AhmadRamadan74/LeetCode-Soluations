class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sumDiv = 0 ,  sumNotDiv = 0;
        for(int i = 1 ; i <= n; i++) {
            if(i % m == 0) sumDiv += i;
            else sumNotDiv += i;
        }
        return sumNotDiv - sumDiv;
    }
};