class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = (int)nums.size();
        int sum = 0;

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        int max_sum = sum;
        
        for(int i = 1; i < n - k + 1; i++) {
            sum += nums[i + k - 1] - nums[i - 1];
            max_sum = std::max(max_sum, sum);
        }
        
        return double(max_sum) / k;
    }
};