class Solution {
public:
    
    bool isValid(int x, int y, int rows, int cols){
        if(x >= rows || x < 0){
            return false;
        }
        if(y >= cols || y < 0){
            return false;
        }
        return true;
    }
    
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows = (int)matrix.size();
        int cols = (int)matrix[0].size();
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(isValid(i+1, j+1, rows, cols) && matrix[i][j] != matrix[i+1][j+1]){
                    return false;
                }
            }
        }
        return true;
    }
};