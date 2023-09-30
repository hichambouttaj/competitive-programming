class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = (int)matrix.size();
        int cols = (int)matrix[0].size();
        
        if(matrix[0][cols - 1] == target)
            return true;
        if(matrix[rows - 1][0] == target)
            return true;
        
        int i = 0;
        int j = cols - 1;
        
        while(i >= 0 && i < rows && j >= 0 && j < cols) {
            if(matrix[i][j] > target) {
                j--;
            }else if(matrix[i][j] < target) {
                i++;
            }else {
                return true;
            }
        }
                    
        return false;
    }
};