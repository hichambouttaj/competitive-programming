class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int sz = (int)nums.size();
        int rs = -1;
        int suffix_max = nums[sz - 1];
        
        for(int i = sz - 2; i >= 0; i--) {
            if(nums[i] < suffix_max) {
                rs = std::max(rs, suffix_max - nums[i]);
            }
            suffix_max = std::max(suffix_max, nums[i]);
        } 
        
        return rs;
    }
};