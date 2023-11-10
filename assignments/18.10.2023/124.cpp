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
    int maxi(TreeNode* node, int &ans){
        if(node == NULL){
            return 0;
        }

        int lh = max(0, maxi(node->left, ans));
        int rh = max(0, maxi(node->right, ans));

        ans = max(ans, lh+rh+node->val);

        return max(lh,rh) + node->val;
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        maxi(root, ans);
        return ans;
    }
};