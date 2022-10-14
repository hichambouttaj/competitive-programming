class Solution {
public:
    int BSfindFirst(vector<vector<int>> &nums, int  target){
        int start = 0;
        int end = (int)nums.size() - 1;
        int position = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid][0] < target){
                start = mid + 1;
            }else if(nums[mid][0] >= target){
                end = mid - 1;
                position = mid;
            }
        }
        return position;
    }
    
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int sz = (int)intervals.size();
        vector<vector<int>> starting;
        for(int i = 0; i < sz; i++){
            starting.push_back({intervals[i][0], i});
        }
        sort(starting.begin(), starting.end());
        vector<int> result(sz, -1);
        for(int i = 0; i < sz; i++){
            int idx = BSfindFirst(starting, intervals[i][1]);
            if(idx != -1){
                result[i] = starting[idx][1];
            }
        }
        return result;
    }
};