class Solution {
private:
    int dp[59];
    
    int solve(int n) {
        if(n == 1)
            return 1;
        
        int &ref = dp[n];
        
        if(ref != -1)
            return ref;
        
        ref = n;
        
        for(int i = 1; i < n; i++) {
            ref = std::max(ref, i * solve(n - i));
        }
        
        return ref;
    }
    
public:
    int integerBreak(int n) {
        if(n == 2 || n == 3)
            return n - 1;
        
        memset(dp, -1, sizeof(dp));
        
        return solve(n);
    }
};