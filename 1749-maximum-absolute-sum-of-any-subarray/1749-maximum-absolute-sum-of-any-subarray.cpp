class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sz = (int)nums.size();
            
        int max_sum_end = 0;
        int max_sum = INT_MIN;
        
        int min_sum_end = 0;
        int min_sum = INT_MAX;
        
        for(int i = 0; i < sz; i++) {
            max_sum_end = std::max(0, max_sum_end + nums[i]);
            min_sum_end = std::min(0, min_sum_end + nums[i]);
            
            max_sum = std::max(max_sum, max_sum_end);
            min_sum = std::min(min_sum, min_sum_end);
        }
        
        return std::max(abs(min_sum), max_sum);
    }
};