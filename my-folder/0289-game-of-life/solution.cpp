class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>res=board;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count=0;
                if(i-1>=0 && res[i-1][j]==1) count++;
                if(i+1<n && res[i+1][j]==1) count++;
                if(j-1>=0 && res[i][j-1]==1) count++;
                if(j+1<m && res[i][j+1]==1) count++;
                if(i-1>=0 && j-1>=0 && res[i-1][j-1]==1) count++;
                if(i+1<n && j-1>=0 && res[i+1][j-1]==1) count++;
                if(i-1>=0 && j+1<m && res[i-1][j+1]==1) count++;
                if(i+1<n && j+1<m && res[i+1][j+1]==1) count++;
                if(count<2 && board[i][j]==1) board[i][j]--;
                // if(count>2 && board[i][j]==1) board[i][j];
                if(count>3 && board[i][j]==1) board[i][j]--;
                if(count==3 && board[i][j]==0) board[i][j]++; 
            }
        }        
    }
};
