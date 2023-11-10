class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = (int)nums.size();
        int left = 0;
        int right = 0;
        
        while(right < n) {
            if(nums[right] != 0) {
                nums[left++] = nums[right++];
            }else {
                right++;
            }
        }
        
        while(left < n)
            nums[left++] = 0;
    }
};