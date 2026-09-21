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
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        if(!root) return NULL;
        limit-=root->val;
        if(!root->left && !root->right) return (limit>0) ? NULL:root;
        root->left=sufficientSubset(root->left,limit);
        root->right=sufficientSubset(root->right,limit);
        return (!root->left && !root->right) ? NULL:root;       
    }
};
