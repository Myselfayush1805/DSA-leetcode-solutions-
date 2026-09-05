class Solution {
public:
    int totalNQueens(int n) {
        vector<bool> mp(n);
        vector<bool> mainDiag(2*n-1);
        vector<bool> antiDiag(2*n-1);
        int count=0;
        backtrack(mp,mainDiag,antiDiag,0,count,n);
        return count;     
    }
private:
    void backtrack(vector<bool>& mp, vector<bool>& mainDiag, vector<bool>& antiDiag, int idx, int& count, int& n) {
        if(idx==n){
            count++;
            return;
        }
        for(int i=0;i<n;i++){
            if(!mp[i] && !mainDiag[i-idx+n-1] && !antiDiag[i+idx]){
                mp[i]=true;
                mainDiag[i-idx+n-1]=true;
                antiDiag[i+idx]=true;
                backtrack(mp,mainDiag,antiDiag,idx+1,count,n);
                mp[i]=false;
                mainDiag[i-idx+n-1]=false;
                antiDiag[i+idx]=false;
            }
        }
    }
};
