class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ind;
        int c = 0;
        for(auto i: words) {
          for(auto j: i) {
            if(j == x) {
                ind.push_back(c);
                break;
            }
          }
          c++;
        }
        return ind;
    }
};