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
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
        if (root == NULL)  return  {};
        
        vector<vector<int>> result;

        queue<TreeNode*> q;
        q.push(root);

        bool b = true;

        while (!q.empty()) {
            int n = q.size();
            vector<int> tmp(n);

            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();

                int index = (b) ? i : (n - 1 - i);
                tmp[index] = node->val;

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            b = !b;
            result.push_back(tmp);
        }
        return result;
    }
};  