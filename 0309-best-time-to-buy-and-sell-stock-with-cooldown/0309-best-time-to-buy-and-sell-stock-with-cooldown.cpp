class Solution {
private:
    vector<int> values;
    int dp[5001][2][3];
public:
    
    int solve(int index, bool stocked, int operation) {
        if(index == (int)values.size())
            return 0;
        
        int &ref = dp[index][stocked][operation];
        
        if(ref != -1)
            return ref;
        
        int cooldown_choice = solve(index + 1, stocked, 0);
        int buy_choice = 0;
        int sell_choice = 0;
        
        if(stocked) {
            sell_choice = values[index] + solve(index + 1, 0, 1);
        }else if(operation != 1) {
            buy_choice = -values[index] + solve(index + 1, 1, 2);
        }
        
        return ref = std::max(cooldown_choice, std::max(sell_choice, buy_choice));
    }
    
    int maxProfit(vector<int>& prices) {
        values = prices;
        memset(dp, -1, sizeof(dp));
        
        // 0 for cooldown
        // 1 for sell
        // 2 for buy
        
        return solve(0, false, 0);
    }
};