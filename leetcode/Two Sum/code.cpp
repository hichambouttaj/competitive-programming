class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        map<int, int> m;
        int sz = (int)nums.size();
        for(int i = 0; i < sz; ++i){
            int nbr = target - nums[i];
            if(m.count(nbr)){
                v.push_back(m[nbr]);
                v.push_back(i);
                return v;
            }
            m.insert(pair<int, int>(nums[i], i));
        }
        return v;
    }
};