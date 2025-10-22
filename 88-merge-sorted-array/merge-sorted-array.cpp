class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = nums1.size() - 1;
        while(m > 0 and n > 0) {
            if(nums2[n - 1] >= nums1[m - 1]){
                nums1[i] = nums2[n - 1];
                n--;
            }
            else {
                nums1[i] = nums1[m - 1];
                m--; 
            }
            i--;
        }
        while(n > 0){
            nums1[i] = nums2[n - 1];
            n--;
            i--;
        }
    }
};