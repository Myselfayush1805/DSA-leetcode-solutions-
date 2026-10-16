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
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nums;
        inorder(root,nums);  
        return dfs(0,nums.size()-1,nums); 
    }
private:
    void inorder(TreeNode* root, vector<int>& nums) {
        if(!root) return;
        inorder(root->left,nums);
        nums.push_back(root->val);
        inorder(root->right,nums);
    }
    TreeNode* dfs(int start, int end, vector<int>& nums) {
        if(start>end) return NULL;
        int mid=(start+end)/2;
        TreeNode* ans=new TreeNode(nums[mid]);
        ans->left=dfs(start,mid-1,nums);
        ans->right=dfs(mid+1,end,nums);
        return ans;
    }
};
