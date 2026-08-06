class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        vector<bool> used(nums.size(),false);
        backtrack(temp,res,nums,used);
        return res;        
    }
private:
    void backtrack(vector<int>& temp, vector<vector<int>>& res, vector<int>& nums, vector<bool>& used) {
        if(temp.size()==nums.size()){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1] && used[i-1]==false) continue;
            if(used[i]) continue;
            used[i]=true;
            temp.push_back(nums[i]);
            backtrack(temp,res,nums,used);
            used[i]=false;
            temp.pop_back();
        }
    }
};
