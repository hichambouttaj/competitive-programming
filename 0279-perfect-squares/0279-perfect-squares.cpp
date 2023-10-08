class Solution {
private:
    int dp[10001];
    
    int solve(int n) {
        if(n <= 0)
            return 0;
        
        int &ref = dp[n];
        
        if(ref != -1)
            return ref;
        
        ref = INT_MAX;
        
        for(int i = 1; i * i <= n; i++) {
            ref = std::min(ref, 1 + solve(n - i * i));
        }
        
        return ref;
    }
    
public:
    int numSquares(int n) {
        memset(dp, -1, sizeof(dp));
        
        return solve(n);
    }
};