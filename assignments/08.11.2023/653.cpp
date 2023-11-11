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
    unordered_set<int> elements;

    bool findSum(TreeNode* root, int k) {
        if (!root) return false;

        if (elements.count(k - root->val) > 0) {
            return true;
        }

        elements.insert(root->val);

        bool leftFound = findSum(root->left, k);
        bool rightFound = findSum(root->right, k);

        return leftFound || rightFound;
    }
    bool findTarget(TreeNode* root, int k) {
        return findSum(root, k);
    }


};