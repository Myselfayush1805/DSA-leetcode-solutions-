class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;  
        backtrack(target,0,temp,res,candidates);
        return res;       
    }
private:
    void backtrack(int target, int start, vector<int>& temp, vector<vector<int>>& res, vector<int>& candidates){
        if(target==0){
            res.push_back(temp);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            int n=candidates[i];
            if(n<=target){
                temp.push_back(n);
                backtrack(target-n,i,temp,res,candidates);
                temp.pop_back();
            }
        }
    }
};
