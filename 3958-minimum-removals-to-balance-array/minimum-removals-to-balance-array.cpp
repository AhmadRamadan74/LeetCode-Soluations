class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=1e9;
        for(int i=0;i<n;i++){
            int inx=upper_bound(nums.begin(),nums.end(),(long long)nums[i]*k)-nums.begin();
            cnt=min(cnt,n-inx+i);
        }
        return cnt;
    }
};