class Solution {
public:
    
    void rotate_by_one(vector<vector<int>> &m, int row, int col) {
        int n = (int)m.size();
        
        int tmp = m[n - col - 1][row];
        m[n - col - 1][row] = m[n - row - 1][n - col - 1];
        m[n - row - 1][n - col - 1] = m[col][n - row - 1];
        m[col][n - row - 1] = m[row][col];
        m[row][col] = tmp;
    }
    
    void rotate(vector<vector<int>>& matrix) {
        int n = (int)matrix.size();
        
        for(int i = 0; i < n / 2; i++) {
            for(int j = i; j < n - i - 1; j++) {
                rotate_by_one(matrix, i, j);
            }
        }
    }
};