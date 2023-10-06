class Solution {
private: 
    vector<vector<int>> values;
    int dp[101][101];
    
    bool compareCuboids(int first, int second) {
        bool isLessWidth = values[first][0] <= values[second][0];
        bool isLessLength = values[first][1] <= values[second][1];
        bool isLessHeight = values[first][2] <= values[second][2];
        
        return isLessWidth && isLessLength && isLessHeight;
    }
    
    int lis(int index, int last_index) {
        if(index == (int)values.size())
            return 0;
        
        int &ref = dp[index][last_index];
        
        if(ref != -1)
            return ref;
        
        int leave_choice = lis(index + 1, last_index);
        int pick_choice = 0;
        
        if(last_index == (int)values.size() || compareCuboids(last_index, index))
            pick_choice = values[index][2] + lis(index + 1, index);
        
        return ref = std::max(leave_choice, pick_choice);
    }
    
public:
    int maxHeight(vector<vector<int>>& cuboids) {
        for(vector<int> &cuboide : cuboids) {
            sort(cuboide.begin(), cuboide.end());
        }
        
        sort(cuboids.begin(), cuboids.end());
        
        values = cuboids;
        memset(dp, -1, sizeof(dp));
        
        return lis(0, (int)values.size());
    }
};