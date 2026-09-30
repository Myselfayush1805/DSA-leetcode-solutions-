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
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        int ans=0;
        dfs(count,ans,root,k);
        return ans;
    }
private:
    void dfs(int& count, int& ans, TreeNode* root, int& k) {
        if(!root) return;
        dfs(count,ans,root->left,k);
        count++;
        if(count==k){
            ans=root->val;
            return;
        }
        dfs(count,ans,root->right,k);
    }
};
