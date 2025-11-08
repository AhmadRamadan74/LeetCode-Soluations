class Solution {
public:
    int firstUniqChar(string s) {
        int freq[1000005] = {0};
        for(int i = 0 ; i < s.size() ; i++)
            freq[s[i]]++;
        bool flag = false;
        int ans = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(freq[s[i]] == 1){
                flag = true;
                ans = i;
                break;
            }
        }  
        if(flag) return ans;
        else return -1;
    }
};