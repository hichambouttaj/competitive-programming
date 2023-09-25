class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int sz = (int)nums.size();
        unordered_map<int, int> my_map;
        
        for(int i = 0; i < sz; i++) {
            if(my_map.count(nums[i]) && abs(i - my_map[nums[i]]) <= k) {
                return true;
            }
            my_map[nums[i]] = i;
        }
        return false;
    }
};