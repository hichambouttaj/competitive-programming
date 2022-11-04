class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int nbr = 0;
        for(int i = 0; i < nums.size(); i++){
            nbr = nbr ^ nums[i];
        }
        return nbr;
    }
};