class Solution {
private:
    vector<int> values;
    int dp[201][10001];
    
    bool subset_sum(int index, int target) {
        if(target < 0)
            return false;
        
        if(target == 0)
            return true;
        
        if(index == (int)values.size())
            return false;
        
        int &ref = dp[index][target];
        
        if(ref != -1)
            return ref;
        
        if(subset_sum(index + 1, target))
            return ref = true;
        
        return ref = subset_sum(index + 1, target - values[index]);
    }
    
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        
        if(sum % 2 != 0)
            return false;
        
        values = nums;
        memset(dp, -1, sizeof(dp));
        
        return subset_sum(0, sum / 2);
    }
};