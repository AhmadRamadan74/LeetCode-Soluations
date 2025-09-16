class Solution {
public:
    int maxArea(vector<int>& heights) {
      int l = 0 , r = heights.size() - 1;
      int ans = 0;
      while(l < r){
        int calc = min(heights[l] , heights[r]) * ( r - l );
        ans = max(ans , calc);
        if(heights[l] <= heights[r]) l++;
        else r-- ;
      }
      return ans;
    }
};
