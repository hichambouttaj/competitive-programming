class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = (int)nums.size();
        
        int sum_range = (n * (n + 1)) / 2;
        
        for(int i = 0; i < n; i++) {
            sum_range -= nums[i];
        }
        
        return sum_range;        
    }
};