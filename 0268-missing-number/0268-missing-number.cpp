class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = (int)nums.size();
        
        int sum_nums = 0;
        int sum_range = (n * (n + 1)) / 2;
        
        for(int i = 0; i < n; i++) {
            sum_nums += nums[i];
        }
        
        return sum_range - sum_nums;        
    }
};