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
        vector<int> temp;
        dfs(temp,root);
        TreeNode* dummy=new TreeNode(0);
        TreeNode* curr=dummy;
        for(int i=0;i<temp.size();i++){
            curr->right=new TreeNode(temp[i]);
            curr=curr->right;
        }
        return dummy->right;   
    }
private:
    void dfs(vector<int>& temp, TreeNode* root) {
        if(!root) return;
        dfs(temp,root->left);
        temp.push_back(root->val);
        dfs(temp,root->right);
    }
};
