class Solution {
    template <typename T>
bool isPrime(T n) {
    if (n <= 1) {
        return false; 
    }
    if (n == 2 || n == 3) {
        return true; 
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (T i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

public:
    int countDigits(int n) {
        vector<int>check;
        string s = to_string(n);
        for(int i = 0 ; i < s.size();  i++){
            check.push_back(s[i] - '0');
        }
        int cnt = 0;
        for(int i = 0 ; i < check.size();  i++){
            if(n % check[i] == 0) cnt++;
        }
        return cnt;
    }
};