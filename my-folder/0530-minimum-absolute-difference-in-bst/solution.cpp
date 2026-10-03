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
    int getMinimumDifference(TreeNode* root) {
        int prev=-1;
        int minDiff=INT_MAX;
        dfs(prev,minDiff,root);    
        return minDiff;    
    }
private:
    void dfs(int& prev, int& minDiff, TreeNode* root) {
        if(!root) return;
        dfs(prev,minDiff,root->left);
        if(prev!=-1) minDiff=min(minDiff,root->val-prev);
        prev=root->val;
        dfs(prev,minDiff,root->right);
    }
};
