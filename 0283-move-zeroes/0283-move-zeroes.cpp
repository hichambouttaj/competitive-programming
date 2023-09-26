class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = (int)nums.size();
        int start = 0;
        int end = sz - 1;
        
        while(start < end) {
            if(nums[start] == 0) {
                for(int i = start; i < end; i++) {
                    nums[i] = nums[i + 1];
                }
                nums[end] = 0;
                end--;
            }else {
                start++;
            }
        }
    }
};