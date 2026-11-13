class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
        vector<int>miss;
        sort(arr.begin(), arr.end());
        int i = 0;
        for(int trade = arr[0]; trade <= arr.back(); trade++) { // 1 - 5, the whole nums
            if(i < arr.size() && arr[i] == trade) {
                while(i < arr.size() && trade == arr[i]) i++;
            }
            else miss.push_back(trade);
        }
        return miss;
    }
};