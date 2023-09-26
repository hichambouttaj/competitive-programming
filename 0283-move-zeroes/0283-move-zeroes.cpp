class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = (int)nums.size();
        
        int non_zeros_count = 0;
        
        for(int i = 0; i < sz; i++) {
            if(nums[i] != 0) {
                if(i != non_zeros_count) {
                    nums[non_zeros_count] = nums[i];
                    nums[i] = 0;
                }
                non_zeros_count++;
            }
        }
    }
};