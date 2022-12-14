class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sz = (int)nums.size();
        int sum = 0;
        for(int i = 0; i < sz; i += 2){
            sum += nums[i];
        }
        return sum;
    }
};