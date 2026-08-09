class Solution {
   public:
    bool validRow(vector<char> arr) {
        vector<int> freq(10, 0);
        for (char c : arr) {
            if (c != '.') {
                freq[c - '0']++;
            }
        }
        for (int x : freq) {
            if (x > 1) {
                return false;
            }
        }
        return true;
    }

    bool validCol(int colNo, vector<vector<char>> board) {
        vector<int> freq(10, 0);
        for (int j = 0; j < 9; j++) {
            if ((board[j][colNo - 1]) != '.') {
                freq[(board[j][colNo - 1]) - '0']++;
            }
        }
        for (int x : freq) {
            if (x > 1) {
                return false;
            }
        }
        return true;
    }

    bool validSquare(int startRow , int startCol , vector<vector<char>>& board){
        vector<int>freq(10,0);
        for(int i=startRow;i<startRow+3;i++){
            for(int j=startCol;j<startCol+3;j++){
                if(board[i][j]!='.'){
                    freq[(board[i][j]-'0')]++;
                }
        }
        }
        for (int x : freq) {
            if (x > 1) {
                return false;
            }
        }
        return true;

    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            if (!validRow(board[i])) {
                return false;
            }
        }
        for (int i = 1; i <= 9; i++) {
            if (!validCol(i, board)) {
                return false;
            }
        }

        for(int i=0;i<9;i=i+3){
            for(int j=0;j<9;j=j+3){
                if(!validSquare(i,j,board)){
                    return false;
                }
            }
        }
        return true;
        
    }
};
