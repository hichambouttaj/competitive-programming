class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> arr;
        for(int i = 0; i < nums.size(); i++){
            if(arr.find(nums[i]) != arr.end()){
                if(abs(i - arr[nums[i]]) <= k){
                    return true;
                }else{
                    arr[nums[i]] = i;
                }
            }else{
                arr[nums[i]] = i;
            }
        }
        return false;
    }
};