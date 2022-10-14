class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) { 
        if((int)nums.size() == 0)
            return {-1, -1};
        int start = 0;
        int end = (int)nums.size() - 1;
        int mid = 0;
        while(start <= end){
            mid = start + (end - start) / 2;
            if(nums[mid] == target)
                break;
            else if(nums[mid] > target){
                end = mid - 1;
            }else {
                start = mid + 1;
            }
        }
        start = end = mid;
        if(nums[mid] == target){
            while(start >= 0 && nums[start] == target){
                start--;
            }
            while(end < (int)nums.size() && nums[end] == target){
                end++;
            }
            return {start + 1, end - 1};
        }
        return {-1, -1};
    }
};