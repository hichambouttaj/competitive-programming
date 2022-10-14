class Solution {
public:

    void solve(vector<int>& nums, int n){
        for(int i = 0; i < n; i++){
            nums[i] += 50000;
        }

        int current_max = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] > current_max){
                current_max = nums[i];
            }
        }

        vector<int> freq(current_max + 1);
        for(int i = 0; i < n; i++){
            freq[nums[i]] += 1;
        }

        int idx = 0;

        for(int i = 0; i <= current_max; i++){
            for(int j = 0; j < freq[i]; j++){
                nums[idx] = i - 50000;
                idx++;
            }
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = (int)nums.size();

        solve(nums, n);


        return nums;
    }
};