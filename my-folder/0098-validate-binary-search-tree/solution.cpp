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
    bool isValidBST(TreeNode* root) {
        return dfs(LONG_MIN,LONG_MAX,root);       
    }
private:
    bool dfs(long long min, long long max, TreeNode* root) {
        if(!root) return true;
        if(root->val<=min || root->val>=max) return false;
        if(!dfs(min,root->val,root->left) || !dfs(root->val,max,root->right)) return false;
        return true; 
    }
};
