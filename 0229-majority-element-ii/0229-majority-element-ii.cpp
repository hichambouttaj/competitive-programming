class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int sz = (int)nums.size();
        
        for(int i = 0; i < sz; ++i) {
            m[nums[i]]++;
        }
        
        vector<int> rs;
        
        for(const pair<int, int> &p : m) {
            if(p.second > sz / 3)
                rs.push_back(p.first);
        }
        
        return rs;
    }
};