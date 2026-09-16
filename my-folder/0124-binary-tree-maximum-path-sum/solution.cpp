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
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        dfs(sum,root);
        return sum;        
    }
private: 
    int dfs(int& sum ,TreeNode* root) {
        if(!root) return 0;
        int leftSum=max(0,dfs(sum,root->left));
        int rightSum=max(0,dfs(sum,root->right));
        sum=max(sum,leftSum+rightSum+root->val);
        return root->val+max(leftSum,rightSum);
    }
};
