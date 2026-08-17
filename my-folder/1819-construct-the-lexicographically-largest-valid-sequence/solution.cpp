class Solution {
public:
    vector<int> constructDistancedSequence(int n) {
        vector<int> res(2*n-1);
        vector<bool> used(n+1,false);
        backtrack(0,res,used,n);
        return res;        
    }
private:
    bool backtrack(int idx, vector<int>& res, vector<bool>& used, int n) {
        if(idx==res.size()) return true;
        if(res[idx]!=0) return backtrack(idx+1,res,used,n);
        for(int i=n;i>0;i--){
            if(used[i]) continue;
            if(i==1){
                res[idx]=1;
                used[1]=true;
                if(backtrack(idx+1,res,used,n)) return true;
                res[idx]=0;
                used[1]=false;
            }
            else if(idx+i<res.size() && res[idx+i]==0){
                res[idx]=i;
                res[idx+i]=i;
                used[i]=true;
                if(backtrack(idx+1,res,used,n)) return true;
                res[idx]=0;
                res[idx+i]=0;
                used[i]=false;
            }
        }
        return false;
    }
};
