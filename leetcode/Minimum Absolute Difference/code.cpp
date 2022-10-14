class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        int min = INT_MAX;

        for(int i = 0; i < (int)arr.size() - 1; i++){
            min = std::min(min, arr[i + 1] - arr[i]);
        }

        int idx = 0;
        for(int i = 0; i < (int)arr.size() - 1; i++){
            if((arr[i+1] - arr[i]) == min){
                res.push_back({arr[i], arr[i + 1]});
            }
        }
        
        return res;
    }
};