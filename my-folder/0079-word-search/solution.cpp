class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(backtrack(board,word,i,j,0,n,m)) return true;
                }
            }
        }
        return false;      
    }
private:
    bool backtrack(vector<vector<char>>& board, string& word, int row, int col, int idx, int& n, int& m) {
        if(idx==word.size()) return true;
        if(row<0 || row>=n || col<0 || col>=m || board[row][col]!=word[idx]) return false;
        char temp=board[row][col];
        board[row][col]='*';
        bool found=backtrack(board,word,row+1,col,idx+1,n,m) ||
                   backtrack(board,word,row-1,col,idx+1,n,m) ||
                   backtrack(board,word,row,col+1,idx+1,n,m) ||
                   backtrack(board,word,row,col-1,idx+1,n,m);
        board[row][col]=temp;
        return found;
    }
};
