class Solution {
private:
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    bool isCycle;
public:
    
    bool isValid(int r, int c, vector<vector<char>> &grid){
        if(r < 0 || r >= (int)grid.size()){
            return false;
        }
        if(c < 0 || c >= (int)grid[0].size()){
            return false;
        }
        return true;
    }


    
    
    void dfs(int r, int c, vector<vector<char>> &grid, vector<vector<bool>> &visited, char value, int parX = -1, int parY = -1){
        if(!isValid(r, c, grid) || grid[r][c] != value || isCycle){
            return;
        }
        
        if(visited[r][c]){
            isCycle = true;
            return;
        }
        
        visited[r][c] = true;
        for(int d = 0; d < 4; d++){
            int nr = r + dx[d];
            int nc = c + dy[d];
            if(nr == parX && nc == parY){
                continue;
            }
            dfs(nr, nc, grid, visited, value, r, c);
        }
    }
    
    bool containsCycle(vector<vector<char>>& grid) {
        int sx = (int)grid.size();
        int sy = (int)grid[0].size();
        vector<vector<bool>> visited(sx, vector<bool>(sy));
        for(int i = 0; i < sx; i++){
            for(int j = 0; j < sy; j++){
                if(!visited[i][j]){
                    isCycle = false;
                    dfs(i, j, grid, visited, grid[i][j]);
                    if(isCycle){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};