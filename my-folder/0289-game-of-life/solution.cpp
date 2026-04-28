class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        //METHOD 3(Ghost State Method)
        int n=board.size();
        int m=board[0].size();
        int drow[]={-1,+1,0,0,-1,-1,+1,+1};
        int dcol[]={0,0,-1,+1,-1,+1,-1,+1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count=0;
                for(int k=0;k<8;k++){ 
                    int nR=i+drow[k];
                    int nC=j+dcol[k];                 
                    if(nR>=0 && nR<n && nC>=0 && nC<m){
                        if(board[nR][nC]==1 || board[nR][nC]==2) count++;
                    }
                }
                if(board[i][j]==1){
                    if(count<2 || count>3) board[i][j]=2;
                }
                else if(board[i][j]==0){
                    if(count==3)  board[i][j]=3; 
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==2) board[i][j]=0;
                else if(board[i][j]==3) board[i][j]=1;
            }
        }
    }
};
