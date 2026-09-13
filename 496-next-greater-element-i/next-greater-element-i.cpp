class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& arr, vector<int>& arr2) {
        vector<int>ans;
        for(auto i: arr) {
            int idx = -1;
            for(int j = 0; j < arr2.size(); j++ ){
                if(i == arr2[j]) {
                    idx = j;
                    break;
                }
            }

            int nxt = -1;
            for(int j = idx + 1; j < arr2.size(); j++ ){
                if(arr2[j] > i){
                    nxt = arr2[j];
                    break;
                }
            }
            ans.push_back(nxt);
        }
        return ans;
    }
};