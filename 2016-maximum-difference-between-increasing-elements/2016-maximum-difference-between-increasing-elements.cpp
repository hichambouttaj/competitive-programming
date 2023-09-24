class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int sz = (int)nums.size();
        vector<int> prefix_max(sz);

        prefix_max[sz - 1] = 0;

        for(int i = sz - 2; i >= 0; i--) {
            if(prefix_max[i + 1] != 0) {
                if(nums[i] < prefix_max[i + 1])
                    prefix_max[i] = prefix_max[i + 1];
                else
                    prefix_max[i] = 0;
            }else if(nums[i] < nums[i + 1]){
                prefix_max[i] = nums[i + 1];
            }else {
                prefix_max[i] = 0;
            }
        }

        int rs = -1;

        for(int i = 0; i < sz; i++) {
            int sub = prefix_max[i] - nums[i];
            if(sub > rs)
                rs = sub;
        }

        return rs;
    }
};