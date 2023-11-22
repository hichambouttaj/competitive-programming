class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = (int)nums.size();
        
        for(int i = 0; i < n; i++) {
            int idx = abs(nums[i]) - 1;
            if(idx < n && nums[idx] < 0) {
                return idx + 1;
            }
            nums[idx] = -nums[idx];
        }
        
        return -1;
    }
};