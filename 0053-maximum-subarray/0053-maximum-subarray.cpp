class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sz = (int)nums.size();
    
        int prefix_sum = 0;        
        int max_ps = INT_MIN;
        int min_ps = INT_MAX;
        
        for(int i = 0; i < sz; i++) {
            prefix_sum += nums[i];
            max_ps = std::max(max_ps, prefix_sum);
            
            if(i) {
                max_ps = std::max(max_ps, prefix_sum - min_ps);
            }
            min_ps = std::min(min_ps, prefix_sum);
        }
        
        return max_ps;
    }
};