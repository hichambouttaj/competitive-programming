class Solution {
private:
    int dp[101];
    string str;
    
    int solve(int index) {
        if(index == (int)str.size())
            return 1;
        
        if(str[index] == '0')
            return 0;
        
        int &ref = dp[index];
        
        if(ref != -1)
            return ref;
        
        ref = solve(index + 1);
        
        if(index + 1 < (int)str.size()) {
            int sub = stoi(str.substr(index, 2));
            
            if(sub >= 1 && sub <= 26) {
                ref += solve(index + 2);
            }
        }
        
        return ref;
    }
    
public:
    int numDecodings(string s) {
        str = s;
        memset(dp, -1, sizeof(dp));
        
        return solve(0);
    }
};