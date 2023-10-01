class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = (int)nums.size();
        int sum = n;
        
        for(int i = 0; i < n; i++) {
            sum += (i - nums[i]);
        }
        
        return sum;        
    }
};