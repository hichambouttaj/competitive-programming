class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int sz = (int)nums.size();
        unordered_set<int> arr;
        
        for(int i = 0; i < sz; i++) {
            if(arr.count(nums[i])) {
                return true;
            }
            arr.insert(nums[i]);
            if((int)arr.size() > k) {
                arr.erase(nums[i - k]);
            } 
        }
        return false;
    }
};