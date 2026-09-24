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
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy=new TreeNode(0);
        TreeNode* prev=dummy;
        dfs(prev,root);
        return dummy->right;
    }
private:
    void dfs(TreeNode*& prev, TreeNode* root) {
        if(!root) return;
        dfs(prev,root->left);
        root->left=NULL;
        prev->right=root;
        prev=root;
        dfs(prev,root->right);
    }
};
