class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ind;
        int c = 0;
        for(auto i: words) {
           if(i.find(x) != string :: npos){
                ind.push_back(c);
           }
           c++;
        }
        return ind;
    }
};