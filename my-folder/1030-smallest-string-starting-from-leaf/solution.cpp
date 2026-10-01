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
    string smallestFromLeaf(TreeNode* root) {
        string s="";
        string res="";
        dfs(s,res,root);
        return res;  
    }
private:
    void dfs(string& s, string& res, TreeNode* root) {
        if(!root) return;
        s.push_back('a'+root->val);
        if(!root->left && !root->right){
            string temp=s;
            reverse(temp.begin(),temp.end());
            if(res.empty() || temp<res) res=temp;
        }
        dfs(s,res,root->left);
        dfs(s,res,root->right);
        s.pop_back();
    }
};
