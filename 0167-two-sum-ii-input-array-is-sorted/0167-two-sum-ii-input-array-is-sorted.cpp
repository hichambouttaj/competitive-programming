class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sz = (int)numbers.size();
        int start = 0;
        int end = sz - 1;
        
        while(start <= end) {
            int sum = numbers[start] + numbers[end];
            
            if(sum == target)
                break;
            else if(sum > target)
                end--;
            else
                start++;
        }
        
        return {start + 1, end + 1};
    }
};