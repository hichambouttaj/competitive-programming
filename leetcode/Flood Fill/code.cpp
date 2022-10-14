class Solution {
public:
    
    bool isValid(int r, int c, vector<vector<int>> &image){
        if(r < 0 || r >= (int)image.size()){
            return false;
        }
        if(c < 0 || c >= (int)image[0].size()){
            return false;
        }
        return true;
    }
    
    void dfs(int r, int c, vector<vector<int>> &image, vector<vector<bool>> &visited, int oldColor, int newColor){
        if(!isValid(r, c, image) || visited[r][c] || image[r][c] != oldColor){
            return;
        }
        visited[r][c] = true;
        image[r][c] = newColor;
        int dx[] {-1, 0, 1, 0};
        int dy[] {0, 1, 0, -1};
        for(int d = 0; d < 4; d++){
            dfs(r + dx[d], c + dy[d], image, visited, oldColor, newColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<bool>> visited((int)image.size(), vector<bool>((int)image[0].size()));
        dfs(sr, sc, image, visited, image[sr][sc], color);
        return image;
    }
};