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
    int averageOfSubtree(TreeNode* root) {
        int ans=0;
        dfs(ans,root);
        return ans;               
    }
private:
    pair<int,int> dfs(int& ans, TreeNode* root) {
        if(!root) return {0,0};
        pair<int,int>left=dfs(ans,root->left);
        pair<int,int>right=dfs(ans,root->right);
        int sum=left.first+right.first+root->val;
        int count=left.second+right.second+1;
        if(sum/count==root->val) ans++;
        return {sum,count};
    }
};
