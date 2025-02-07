class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries){
        int n=queries.size();
        unordered_map<int,int> freq ,  ball_color;
        vector<int> res(n);
        for(int i=0;i<n;++i){
            int ball = queries[i][0]  , color = queries[i][1];
            if(ball_color.count(ball)){
                freq[ball_color[ball]]--;
                if(freq[ball_color[ball]]==0)
                    freq.erase(ball_color[ball]);
            }

            ball_color[ball]=color , freq[color]++;
            res[i] = freq.size();
        }
        return res;
    }
};