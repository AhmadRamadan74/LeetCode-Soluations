class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        vector<pair<int, int>>vi;
        for(int i = 0; i < arr.size(); i++) {
            vi.push_back({arr[i], i});
        }
        sort(vi.begin(), vi.end());
        for(int i = 0; i + 1 < vi.size(); i++ ){
            if(vi[i].first == vi[i + 1].first) {
                if(abs(vi[i].second - vi[i + 1].second) <= k) return true;
            }
        }
        return false;
    }
};