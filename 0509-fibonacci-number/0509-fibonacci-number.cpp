class Solution {
private: 
    int dp[31] {};
public:
    Solution() {
        dp[0] = 0;
        dp[1] = 1;
    }
    int fib(int n) {
        if(n <= 1)
            return dp[n];
        
        if(dp[n] != 0)
            return dp[n];
        
        return dp[n] = fib(n - 1) + fib(n - 2);
    }
};