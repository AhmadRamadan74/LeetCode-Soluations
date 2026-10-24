class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        string reve = "zyxwvutsrqponmlkjihgfedcba";
        for(auto i: words) {
            int sum = 0;
            for(auto c : i) {
                sum += weights[c - 'a'];
            }
            int mod = sum % 26;
            ans.push_back(reve[mod]);
        }
        return ans;
    }
};