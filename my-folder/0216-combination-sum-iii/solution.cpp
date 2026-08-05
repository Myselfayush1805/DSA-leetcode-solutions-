class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> temp;
        backtrack(k,n,1,temp,res);
        return res;        
    }
private:
    void backtrack(int k, int n, int start, vector<int>& temp, vector<vector<int>>& res) {
        if(n==0 && k==0){
            res.push_back(temp);
            return;
        }
        if(n<0 || k==0) return;
        for(int i=start;i<10;i++){
            temp.push_back(i);
            backtrack(k-1,n-i,i+1,temp,res);
            temp.pop_back();
        }
    }
};
