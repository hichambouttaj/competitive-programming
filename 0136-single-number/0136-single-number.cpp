class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int rs = 0;
        int n = (int)nums.size();
        
        for(int i = 0; i < n; i++) {
            rs ^= nums[i];
        }
        
        return rs;
    }
};