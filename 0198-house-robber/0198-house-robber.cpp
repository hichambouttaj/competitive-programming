class Solution {
private:
    vector<int> values;
    int dp[101];
public:
    int solve(int index) {
        if(index < 0)
            return 0;
        
        if((int)values.size() == 1)
            return values[0];
            
        int &ref = dp[index];
        
        if(ref != -1)
            return ref;

        int is_selected = solve(index - 2) + values[index];
        int is_not_selected = solve(index - 1);
        
        return ref = std::max(is_selected, is_not_selected);
    }

    int rob(vector<int>& nums) {
        values = nums;
        memset(dp, -1, sizeof(dp));
        return solve(nums.size() - 1);
    }
};