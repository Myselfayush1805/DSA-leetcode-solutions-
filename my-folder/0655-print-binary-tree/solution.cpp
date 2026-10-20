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
    vector<vector<string>> printTree(TreeNode* root) {
        int h=height(root);
        int m=h+1;
        int n=(1<<(h+1))-1;
        vector<vector<string>> res(m,vector<string>(n,""));
        dfs(root,0,(n-1)/2,h,res);
        return res;
    }
private:
    int height(TreeNode* root) {
        if(!root) return -1;
        return 1+max(height(root->left),height(root->right));
    }
    void dfs(TreeNode* root, int r, int c, int h, vector<vector<string>>& res) {
        if(!root) return;
        res[r][c]=to_string(root->val);
        if(r<h){
            int offset=1<<(h-r-1);
            if(root->left) dfs(root->left,r+1,c-offset,h,res);
            if(root->right) dfs(root->right,r+1,c+offset,h,res);
        }
    }
};
