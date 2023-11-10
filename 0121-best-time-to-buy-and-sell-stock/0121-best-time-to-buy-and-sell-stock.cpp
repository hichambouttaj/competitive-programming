class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = (int)prices.size();
        if(n == 1)
            return 0;
        
        int left = 0, right = 1, profit = 0;
        
        while(right < n) {
            if(prices[right] > prices[left])
                profit = std::max(profit, prices[right] - prices[left]);
            else
                left = right;
            right++;
        }
        
        return profit;
    }
};