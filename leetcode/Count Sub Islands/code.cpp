class Solution {
public:
    bool isSubIslands;
    bool isValid(int r, int c, vector<vector<int>> &grid2){
        if(r < 0 || r >= (int)grid2.size()){
            return false;
        }
        if(c < 0 || c >= (int)grid2[0].size()){
            return false;
        }
        return true;
    }
    
    void dfs(int r, int c, vector<vector<int>> &grid1, vector<vector<int>> &grid2){
        if(!isValid(r, c, grid2) || grid2[r][c] == 0){
            return;
        }
        
        if(grid2[r][c] && !grid1[r][c]){
            isSubIslands = false;
            return;
        }
        grid2[r][c] = 0;
        
        int dx[] {0, 0, 1, -1};
        int dy[] {1, -1, 0, 0};
        for(int d = 0; d < 4; d++){
            dfs(r + dx[d], c + dy[d], grid1, grid2);
        }
        
    }
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int sx = (int)grid2.size();
        int sy = (int)grid2[0].size();
        int cnt = 0;
        for(int i = 0; i < sx; i++){
            for(int j = 0; j < sy; j++){
                if(grid2[i][j]){
                    isSubIslands = true;
                    dfs(i, j, grid1, grid2);
                    cnt += isSubIslands;
                }
            }
        }
        return cnt;
    }
};