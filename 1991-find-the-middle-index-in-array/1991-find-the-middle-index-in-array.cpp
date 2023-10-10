class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = (int)nums.size();
        
        if(n == 1)
            return 0;
        
        for(int i = 1; i < n; i++) {
            nums[i] += nums[i - 1];
        }
        
        for(int i = 0; i < n; i++) {
            int left_sum = i == 0 ? 0 : nums[i - 1];
            int right_sum = i == n - 1 ? 0 : nums[n - 1] - nums[i];
            if(left_sum == right_sum)
                return i;
        }
        
        return -1;
    }
};