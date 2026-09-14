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
    int pathSum(TreeNode* root, int targetSum) {
        int count=0;
        if(!root) return count;
        dfs(count,root,targetSum);
        count+=pathSum(root->left,targetSum);
        count+=pathSum(root->right,targetSum);
        return count;      
    }
private: 
    void dfs(int& count, TreeNode* root, long long targetSum) {
        if(!root) return;
        if(root->val==targetSum) count++;
        dfs(count,root->left,targetSum-root->val);
        dfs(count,root->right,targetSum-root->val);
    }
};
