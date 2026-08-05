class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        vector<bool> used(nums.size(),false);
        backtrack(nums,temp,res,used);
        return res;        
    }
private:
    void backtrack(vector<int>& nums, vector<int>& temp, vector<vector<int>>& res, vector<bool>& used) {
        if(temp.size()==nums.size()){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            used[i]=true;
            temp.push_back(nums[i]);
            backtrack(nums,temp,res,used);
            used[i]=false;
            temp.pop_back();
        }
    }
};
