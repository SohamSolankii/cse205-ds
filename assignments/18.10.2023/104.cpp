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
    int maxDepth(TreeNode* root) {
        // base case
        if(root == nullptr) return 0;

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        
        int ans = max(left,right) + 1; // height of the tree
        // int ans = left+right+root->val; // tree nodes sum
        // int ans = max({left, right, root->val}); // maximun in tree

        return ans;
    }
    /* depth = height
        TC = O(n)
        SC = O(maxheight)    
     */
};1