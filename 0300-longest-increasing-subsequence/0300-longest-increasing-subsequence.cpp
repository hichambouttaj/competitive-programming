class Solution {
private:
    int dp[2501][2501];
    int lis(int index, int prev_index, vector<int> &nums) {
        if(index == (int)nums.size()) {
            return 0;
        }
        
        auto &ref = dp[index][prev_index];
        
        if(ref != 0)
            return ref; 
        
        int leave_choice = lis(index + 1, prev_index, nums);
        int pick_choice = 0;
        
        if(prev_index >= (int)nums.size() || nums[prev_index] < nums[index]) {
            pick_choice = 1 + lis(index + 1, index, nums);
        }
        
        return ref = std::max(leave_choice, pick_choice);
    }
public:
    
    int lengthOfLIS(vector<int>& nums) {
        return lis(0, (int)nums.size(), nums);
    }
};