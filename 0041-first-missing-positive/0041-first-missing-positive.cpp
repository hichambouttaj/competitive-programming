class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int max_value = nums[0];
        unordered_map<int, int> m;
        int n = (int)nums.size();
        
        for(int i = 0; i < n; i++) {
            m[nums[i]]++;
            max_value = std::max(max_value, nums[i]);
        }
        
        if(max_value < 0)
            return 1;
        
        for(int i = 1; i <= max_value; i++) {
            if(!m.count(i))
                return i;
        }
        
        return max_value + 1;
    }
};