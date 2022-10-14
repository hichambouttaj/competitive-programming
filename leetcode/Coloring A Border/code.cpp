class Solution {
private:
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
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
    
    void dfs(int r, int c, vector<vector<int>> &grid, vector<vector<bool>> &visited, int oldColor){
        if(!isValid(r, c, grid) || visited[r][c] || grid[r][c] != oldColor){
            return;
        }
        visited[r][c] = true;
        for(int i = 0; i < 4; i++){
            int nr = r + dx[i];
            int nc = c + dy[i];
            dfs(nr, nc, grid, visited, oldColor);
        }
    }
    
    void createBorder(vector<vector<int>> &grid, vector<vector<bool>> &visited, int newColor){
        int nx = (int)grid.size();
        int ny = (int)grid[0].size();
        for(int i = 0; i < nx; i++){
            for(int j = 0; j < ny; j++){
                if(!visited[i][j]){
                    continue;
                }
                for(int d = 0; d < 4; d++){
                    int nr = i + dx[d];
                    int nc = j + dy[d];
                    if(!isValid(nr, nc, grid) || !visited[nr][nc]){
                        grid[i][j] = newColor;
                        break;
                    }
                }
            }
        }
    }
    
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color)     {
        int sx = (int)grid.size();
        int sy = (int)grid[0].size();
        vector<vector<bool>> visited(sx, vector<bool>(sy));
        dfs(row, col, grid, visited, grid[row][col]);
        createBorder(grid, visited, color);
        return grid;
    }
};