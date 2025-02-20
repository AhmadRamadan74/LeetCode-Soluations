class Solution {
    string res;
    bool buildNumber(unordered_set<string>& numbers,string& curr,int& n){
        if(curr.size() == n){
            if(numbers.count(curr)==0){
                res = curr;
                return true;
            }
            return false;
        }

        curr.push_back('0');
        if(buildNumber(numbers,curr,n)) return true;
        curr.pop_back();


        curr.push_back('1');
        if(buildNumber(numbers,curr,n)) return true;
        curr.pop_back();

        return false;
    }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        unordered_set<string> numbers(nums.begin(),nums.end());

        string curr="";
        buildNumber(numbers,curr,n);
        return res;
    }
};