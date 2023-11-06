class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = (int)nums.size();
        if(n == 1)
            return nums[0];

        if(n == 2)
            return std::min(nums[0], nums[1]);
        
        if(nums[0] < nums[n - 1])
            return nums[0];
        
        int left = 0;
        int right = n - 1;
        
        while(left <= right) {
            int mid = left + (right - left) / 2;
            
            if(nums[mid] > nums[mid + 1])
                return nums[mid + 1];
            
            if(nums[mid - 1] > nums[mid])
                return nums[mid];
            
            if(nums[left] < nums[mid])
                left = mid + 1;
            else
                right = mid - 1;
        }
        
        return -1;
    }
};