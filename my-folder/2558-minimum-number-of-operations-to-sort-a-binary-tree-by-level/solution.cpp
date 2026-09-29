/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> q;
        int count = 0;
        if (!root->left && !root->right)
            return count;
        q.push(root);
        while (!q.empty()) {
            vector<int> temp;
            int level = q.size();
            while (level--) {
                TreeNode* t = q.front();
                q.pop();
                temp.push_back(t->val);
                if (t->left)
                    q.push(t->left);
                if (t->right)
                    q.push(t->right);
            }
            vector<int> copy(temp);
            sort(copy.begin(), copy.end());
            for (int i = 0; i < copy.size(); i++) {
                if (temp[i] != copy[i]) {
                    for (int j = 0; j < copy.size(); j++) {
                        if (temp[j] == copy[i]) {
                            swap(temp[j], temp[i]);
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};
