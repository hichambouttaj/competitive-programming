class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int sz = (int)arr.size();
        int max_length = 0;
        int idx = 0;
        int start, end;
        
        while(idx < sz) {
            start = idx;
            
            while(idx + 1 < sz && arr[idx] < arr[idx + 1]) {
                idx++;
            }
            
            if(start == idx) {
                idx++;
                continue;
            }
            
            end = idx;
            
            while(idx + 1 < sz && arr[idx] > arr[idx + 1]) {
                idx++;
            }
            
            if(idx == end) {
                ++idx;
                continue;
            }
            
            end = idx;
            
            max_length = std::max(max_length, end - start + 1);
        }
        
        return max_length;
    }
};