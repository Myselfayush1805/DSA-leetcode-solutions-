class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> temp;
        backtrack(target,0,temp,res,candidates);
        return res;        
    }
private:
    void backtrack(int target, int start, vector<int>& temp, vector<vector<int>>& res, vector<int>& candidates) {
        if(target<0) return;
        if(target==0){
            res.push_back(temp);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(i>start && candidates[i]==candidates[i-1]) continue;
            int n=candidates[i];
            temp.push_back(n);
            backtrack(target-n,i+1,temp,res,candidates);
            temp.pop_back();
        }
    }
};
