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
    int sumNumbers(TreeNode* root) {
        int sum=0;
        return dfs(0,root); 
    }
private:
    int dfs(int sum, TreeNode* root) {
        if(!root) return 0;
        sum=sum*10+root->val;
        if(!root->left && !root->right) return sum;
        return dfs(sum,root->left)+dfs(sum,root->right);
    }
};
