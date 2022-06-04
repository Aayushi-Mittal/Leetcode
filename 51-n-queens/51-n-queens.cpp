// class Solution {
// public:
//     int boardSize;
//     vector<string> board;
//     vector<vector<string>> result;
    
//     vector<vector<string>> solveNQueens(int n) {
//         boardSize = n;
//         for(int i = 0; i < n; i++) {
//             board[i]="";
//             for(int j = 0; j < n; j++) {
//                 board[i]+='.';
//             }
//         }
//         placeQueen(0);
//         return result;
//     }
    
//     void placeQueen(int i) {
//         if(i == boardSize) {
//             result.push_back(board);
//             return;
//         }
//         for(int j = 0; j < boardSize; j++) {
//             if(canBePlaced(i, j)) {
//                 board[i][j] = 'Q';
//                 placeQueen(i + 1);
//                 board[i][j] = '.'; //backtrack
//             }
//         }
//     }
    
//     bool canBePlaced(int row, int col) {
//         int n = boardSize;
        
//         for(int i=0; i<n; i++)
//         {
//             if(board[row][i]=='Q') 
//                 return false;
//         }
//         int j=col;
//         for(int i=row; i>=0; i--)
//         {
//             if(board[i][j]=='Q') 
//                 return false;
//             j--;
//         }
//         j=col;
//         for(int i=row; i<n; i++)
//         {
//             if(board[i][j]=='Q') 
//                 return false;
//             j--;
//         }
//         return true;
//     }
    
// };

class Solution {
public:
    vector<vector<string>> ret;
    bool is_valid(vector<string> &board, int row, int col){
        // check col
        for(int i=row;i>=0;--i)
            if(board[i][col] == 'Q') return false;
        // check left diagonal
        for(int i=row,j=col;i>=0&&j>=0;--i,--j)
            if(board[i][j] == 'Q') return false;
        //check right diagonal
        for(int i=row,j=col;i>=0&&j<board.size();--i,++j)
            if(board[i][j] == 'Q') return false;
        return true;
    }
    void dfs(vector<string> &board, int row){
        // exit condition
        if(row == board.size()){
            ret.push_back(board);
            return;
        }
        // iterate every possible position
        for(int i=0;i<board.size();++i){
            if(is_valid(board,row,i)){
                // make decision
                board[row][i] = 'Q';
                // next iteration
                dfs(board,row+1);
                // back-tracking
                board[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
		// return empty if n <= 0
        if(n <= 0) return {{}};
        vector<string> board(n,string(n,'.'));
        dfs(board,0);
        return ret;
    }
};