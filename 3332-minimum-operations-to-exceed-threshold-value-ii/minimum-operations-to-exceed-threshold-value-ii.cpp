#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        priority_queue<ll , vector<ll> , greater<ll>>pq(nums.begin() , nums.end());
        while(pq.size() >= 2 and pq.top() < k){
            ll x = pq.top();
            pq.pop();
            ll y = pq.top();
            pq.pop();
            pq.push((min(x , y) * 2) + max(x , y));
            ans++;
        }
        if(!pq.empty() and pq.top() < k)
            ans++;
        return ans;
    }
};