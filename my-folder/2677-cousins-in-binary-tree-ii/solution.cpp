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
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<int> nums;
        while(!q.empty()){
            int size=q.size();
            int sum=0;
            while(size--){
                TreeNode* t=q.front();
                q.pop();
                sum+=t->val;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            nums.push_back(sum);
        }        
        root->val=0;
        q.push(root);
        int level=1;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int sibSum=0;
                TreeNode* t=q.front();
                q.pop();
                if(t->left) sibSum+=t->left->val;
                if(t->right) sibSum+=t->right->val;
                if(t->left){
                    t->left->val=nums[level]-sibSum;
                    q.push(t->left);
                }
                if(t->right){
                    t->right->val=nums[level]-sibSum;
                    q.push(t->right);
                }
            }
            level++;
        }
        return root;
    }
};
