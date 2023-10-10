class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int> left_sum(n);
        vector<int> right_sum(n);

        left_sum[0] = right_sum[n - 1] = 0;

        for(int i = 1; i < n; i++) {
            left_sum[i] = left_sum[i - 1] + nums[i - 1];
            right_sum[n - i - 1] = right_sum[n - i] + nums[n - i];
        }
        
        for(int i = 0; i < n; i++) {
            nums[i] = abs(left_sum[i] - right_sum[i]);
        }
        return nums;
    }
};