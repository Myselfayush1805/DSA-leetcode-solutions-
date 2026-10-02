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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        return dfs(root).second;        
    }
private:
    pair<int,TreeNode*> dfs(TreeNode* root) {
        if(!root) return{0,NULL};
        auto left=dfs(root->left);
        auto right=dfs(root->right);
        int leftDepth=left.first;
        int rightDepth=right.first;
        if(rightDepth==leftDepth) return {leftDepth+1,root};
        if(leftDepth>rightDepth) return {leftDepth+1,left.second};
        return {rightDepth+1,right.second};
    }
};
