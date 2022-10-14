class Solution {
private:
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    bool isClosedIsland;
public:
    
    bool isValid(int r, int c, vector<vector<int>> &grid){
        if(r < 0 || r >= (int)grid.size()){
            return false;
        }
        if(c < 0 || c >= (int)grid[0].size()){
            return false;
        } 
        return true;
    }
    
    bool isTouchBord(int r, int c, vector<vector<int>> &grid){
        if(r == 0 || r == (int)grid.size() - 1){
            return true;
        }
        if(c == 0 || c == (int)grid[0].size() - 1){
            return true;
        }
        return false;
    }
    
    void dfs(int r, int c, vector<vector<int>> &grid, vector<vector<bool>> &visited){
        if(!isValid(r, c, grid) || visited[r][c] || grid[r][c] == 1){
            return;
        }
        
        if(isTouchBord(r, c, grid)){
            isClosedIsland = false;
            return;
        }
        visited[r][c] = true;
        for(int d = 0; d < 4; d++){
            dfs(r + dx[d], c + dy[d], grid, visited);
        }
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int sx = (int)grid.size();
        int sy = (int)grid[0].size();
        int cnt = 0;
        vector<vector<bool>> visited(sx, vector<bool>(sy));
        for(int i = 0; i < sx; i++){
            for(int j = 0; j < sy; j++){
                if(!grid[i][j] && !visited[i][j]){
                    isClosedIsland = true;
                    dfs(i, j, grid, visited);
                    cnt += isClosedIsland;
                }
            }
        }
        return cnt;
    }
};