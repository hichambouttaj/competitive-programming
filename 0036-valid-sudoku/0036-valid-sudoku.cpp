class Solution {
public:
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                int rowNumber = (i / 3) * 3;
                int colNuumber = (j / 3) * 3;

                for(int row = rowNumber; row < rowNumber + 3; row++){
                    for(int col = colNuumber; col < colNuumber + 3; col++){
                        if(row != i && col != j && board[i][j] == board[row][col]) return false;
                    }
                }
                
                for(int row = 0; row < 9; row++){
                    if(row != i && board[row][j] == board[i][j]) return false;
                }
                
                for(int col = 0; col < 9; col++){
                    if(col != j && board[i][col] == board[i][j]) return false;
                }
            }
        }
        return true;
    }
};