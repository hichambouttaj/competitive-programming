class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sz = (int)nums.size();
       
        if(sz == 1){
            return 1;
        }
        
        int p = 1;
        
        for(int i = 1; i < sz; i++){
            if(nums[i] != nums[i - 1]){
                nums[p++] = nums[i];
            }
        }
        return p;
        
        
    }
};