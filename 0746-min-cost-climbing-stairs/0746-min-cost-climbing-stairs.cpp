class Solution {
private:
    vector<int> values;
    int dp[1001];
    
    int solve(int index) {
        if(index >= (int)values.size())
            return 0;
        
        int &ref = dp[index];
        
        if(ref != -1)
            return ref;

        return ref = values[index] + std::min(solve(index + 1), solve(index + 2));
    }
    
public:
    int minCostClimbingStairs(vector<int>& cost) {
        values = cost;
        memset(dp, -1, sizeof(dp));
        
        return std::min(solve(0), solve(1));
    }
};