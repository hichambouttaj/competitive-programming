class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int sz = (int)arr.size();
        int up_count = 0;
        int down_count = 0;
        int max_length = 0;
        
        for(int i = 1; i < sz; i++) {
            if(down_count && arr[i - 1] < arr[i] || arr[i - 1] == arr[i]) {
                down_count = up_count = 0;
            }
            up_count += arr[i - 1] < arr[i];
            down_count += arr[i - 1] > arr[i];
            
            if(down_count && up_count) {
                max_length = std::max(max_length, up_count + down_count + 1);
            }
        }
        
        return max_length;
    }
};