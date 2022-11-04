class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int sz = (int)nums.size();
        map<int, int> mymap;
        for(int i = 0; i < sz; i++){
            mymap[nums[i]]++;
            if(mymap[nums[i]] > 1){
                return true;
            }
        }
        return false;
    }
};