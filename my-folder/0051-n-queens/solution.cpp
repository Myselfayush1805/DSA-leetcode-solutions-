class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<bool> mp(n,false);
        vector<bool> antiDiag(2*n-1,false);
        vector<bool> mainDiag(2*n-1,false);
        vector<vector<string>> res;
        vector<string> s;
        backtrack(mp,mainDiag,antiDiag,res,s,0,n);
        return res;     
    }
private:
    void backtrack(vector<bool>& mp, vector<bool>& mainDiag, vector<bool>& antiDiag, vector<vector<string>>& res, vector<string>& s, int idx, int& n) {
        if(idx==n){
            res.push_back(s);
            return;
        }
        for(int i=0;i<n;i++){
            if(mp[i]==false && antiDiag[i+idx]==false && mainDiag[i-idx+n-1]==false){
                string row(n,'.');
                row[i]='Q';
                antiDiag[i+idx]=true;
                mainDiag[i-idx+n-1]=true;
                s.push_back(row);
                mp[i]=true;
                backtrack(mp,mainDiag,antiDiag,res,s,idx+1,n);
                antiDiag[i+idx]=false;
                mainDiag[i-idx+n-1]=false;
                s.pop_back();
                mp[i]=false;
            }
        }
    }
};
