/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> temp;
        dfs(res,temp,root,targetSum);
        return res;       
    }
private: 
    void dfs(vector<vector<int>>& res, vector<int>& temp, TreeNode* root, int targetSum) {
        if(!root) return;
        if(!root->left && !root->right && root->val==targetSum){
            temp.push_back(root->val);
            res.push_back(temp);
            temp.pop_back();
            return;
        }
        temp.push_back(root->val);
        dfs(res,temp,root->left,targetSum-root->val);
        dfs(res,temp,root->right,targetSum-root->val);
        temp.pop_back();
    }
};
