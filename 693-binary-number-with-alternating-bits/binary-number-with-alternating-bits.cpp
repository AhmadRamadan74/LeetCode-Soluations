class Solution {
public:
    bool hasAlternatingBits(int n) {
        set<string>st;
        string binary = "";
        while(n > 0) {
            int digit = n / 2, a = n % 2;
            binary += to_string(a);
            n /= 2;
        }
        bool flag = true;
        for(int i = 0; i < binary.size() - 1; i++) {
            if(binary[i] == binary[i + 1]){
                flag = false;
                break;
            } 
        }
        return flag;
    }
};