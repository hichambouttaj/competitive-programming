class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sz = (int)nums.size();
        int prefix_sum = 0;
        int cnt = 0;        
        
        unordered_map<int, int> prefix_map;
        prefix_map[0] = 1;
        
        for(int i = 0; i < sz; i++) {
            prefix_sum += nums[i];

            if(prefix_map.count(prefix_sum - k)) {
                cnt += prefix_map[prefix_sum - k];
            }
            
            prefix_map[prefix_sum]++;
        }
        
        return cnt;
    }
};