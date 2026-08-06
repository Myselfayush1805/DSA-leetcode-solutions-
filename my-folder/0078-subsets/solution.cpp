class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        backtrack(0,temp,res,nums);
        return res;       
    }
private:
    void backtrack(int j, vector<int>& temp, vector<vector<int>>& res, vector<int>& nums) {
        res.push_back(temp);
        for(int i=j;i<nums.size();i++){
            temp.push_back(nums[i]);
            backtrack(i+1,temp,res,nums);
            temp.pop_back();
        }
    }
};
