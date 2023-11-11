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
    bool solve(TreeNode* root,long long intMin,long long intMax){
        if(!root) return 1;

        if(root->val >= intMax or root->val <= intMin) return 0;

        return solve(root->left, intMin, root->val) and solve(root->right, root->val, intMax);
    }
    bool isValidBST(TreeNode* root) {
        return solve(root, -1000000000000, 1000000000000);
    }
};