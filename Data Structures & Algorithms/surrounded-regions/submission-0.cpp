class Solution {
public:
    void dfs(vector<vector<char>>& board,int r,int c){
        int rows=board.size();
        int cols=board[0].size();
        if(r<0 || c<0 || r>=rows || c>=cols || board[r][c]!='O') return;
        board[r][c]='T';
        dfs(board,r+1,c);
        dfs(board,r-1,c);
        dfs(board,r,c+1);
        dfs(board,r,c-1);
    }
    void solve(vector<vector<char>>& board) {
        if(board.empty()) return;
        int rows=board.size();
        int cols=board[0].size();
        for(int r=0;r<=rows-1;r++){
            if(board[r][0]=='O'){
                dfs(board,r,0);
            }
            if(board[r][cols-1]=='O'){
                dfs(board,r,cols-1);
            }
        }
        for(int c=0;c<=cols-1;c++){
            if(board[0][c]=='O'){
                dfs(board,0,c);
            }
            if(board[rows-1][c]=='O'){
                dfs(board,rows-1,c);
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                } else if (board[i][j] == 'T') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};
