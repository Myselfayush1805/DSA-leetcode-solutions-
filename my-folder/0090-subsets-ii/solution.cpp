class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        backtrack(0,temp,res,nums);
        return res;        
    }
private:
    void backtrack(int j, vector<int>& temp, vector<vector<int>>& res, vector<int>& nums) {
        res.push_back(temp);
        for(int i=j;i<nums.size();i++){
            if(i>j && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            backtrack(i+1,temp,res,nums);
            temp.pop_back();
        }
    }
};
