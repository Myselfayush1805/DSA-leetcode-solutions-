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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int leftSize=minDepth(root->left);
        int rightSize=minDepth(root->right);
        if(leftSize==0) return 1+rightSize;
        else if(rightSize==0) return 1+leftSize;
        return 1+min(leftSize,rightSize);        
    }
};
