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
    int findSecondMinimumValue(TreeNode* root) {
        long ans=LONG_MAX;
        dfs(root->val,ans,root);
        return (ans==LONG_MAX) ? -1:ans;        
    }
private:
    void dfs(int firstMin, long& ans, TreeNode* root) {
        if(!root) return;
        if(root->val>firstMin){
            ans=min(ans,(long)root->val);
            return;
        }
        dfs(firstMin,ans,root->left);
        dfs(firstMin,ans,root->right);
    }
};
