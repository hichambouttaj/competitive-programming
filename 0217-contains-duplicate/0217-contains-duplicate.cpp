class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int sz = (int)nums.size();
        unordered_set<int> memo;
        
        for(int i = 0; i < sz; i++) {
            if(memo.count(nums[i]))
                return true;
            memo.insert(nums[i]);
        }
        
        return false;
    }
};