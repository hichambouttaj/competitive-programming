class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int sz = (int)nums.size();

        int length = 0;
        int start = 0;
        int number_of_zeros = 0;

        for(int end = 0; end < sz; end++) {
            if(nums[end] == 0) {
                number_of_zeros++;

                while(number_of_zeros > k) {
                    number_of_zeros -= (nums[start] == 0);
                    start++;
                }
            }
            length = std::max(length, end - start + 1);
        }

        return length;
    }
};