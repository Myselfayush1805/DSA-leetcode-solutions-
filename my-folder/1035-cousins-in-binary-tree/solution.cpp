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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            bool foundX=false;
            bool foundY=false;
            while(size--){
                TreeNode* t=q.front();
                q.pop();
                if(t->val==x) foundX=true;
                if(t->val==y) foundY=true;
                if(t->left && t->right){
                    if((t->left->val==x && t->right->val==y) || (t->left->val==y && t->right->val==x)){
                        return false; 
                        break;
                    }
                }
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(foundX && foundY) return true;
            else if(foundX || foundY)return false;
        }        
        return true;
    }
};
