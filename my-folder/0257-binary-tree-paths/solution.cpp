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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(!root) return res;
        dfs(res,"",root);
        return res;        
    }
private:
    void dfs(vector<string>& res, string s, TreeNode* root) {
        s+=to_string(root->val);
        if(!root->left && !root->right){
            res.push_back(s);
            return;
        }
        s+="->";
        if(root->left) dfs(res,s,root->left);
        if(root->right) dfs(res,s,root->right);
    }
};
