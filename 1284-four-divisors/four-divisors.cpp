#include <bits/stdc++.h>
using namespace std;
class Solution {
    std::vector<int> getDivisors(int n) {
    std::vector<int> divisors;
    n = std::abs(n);
    if (n == 0) {
        return divisors; 
    }
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    std::sort(divisors.begin(), divisors.end());
    return divisors;
}
public:
    int sumFourDivisors(vector<int>& nums) {
        vector<int>arr;
        for(auto i : nums) {
            int sum = 0;
            vector<int>div = getDivisors(i);
            if(div.size() == 4) {
                sum = std::accumulate(div.begin(), div.end(), 0);
                arr.push_back(sum);
            }
        }
        if(arr.size()) return std::accumulate(arr.begin(), arr.end(), 0);
        else return 0;   
    }
};