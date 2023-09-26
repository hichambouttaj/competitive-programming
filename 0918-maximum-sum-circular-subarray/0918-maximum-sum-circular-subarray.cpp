class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sz = (int)nums.size();
        
        int max_sum_end = 0;
        int min_sum_end = 0;
        int min_sum = INT_MAX;
        int max_sum = INT_MIN;
        int sum = 0;
        
        for(int i = 0; i < sz;i ++) {
            max_sum_end = std::max(nums[i], max_sum_end +  nums[i]);
            min_sum_end = std::min(nums[i], min_sum_end +  nums[i]);

            max_sum = std::max(max_sum, max_sum_end);
            min_sum = std::min(min_sum, min_sum_end);
            
            sum += nums[i];
        }
        
        if(sum == min_sum)
            return max_sum;
        
        return std::max(max_sum, sum - min_sum);
    }
};