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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr) return root;
        else if(root->val>key) root->left = deleteNode(root->left,key);
        else if(root->val<key) root->right = deleteNode(root->right,key);
        else{
            if(root->right==nullptr)
                return root->left;
            else if(root->left==nullptr)
                return root->right;
            else{
			    TreeNode* rightChild = root->right;
                TreeNode* lastRight = findLastRight(root->left);
                lastRight->right = rightChild;

                return root->left;
            }
        }
        return root;
    }

    TreeNode* findLastRight(TreeNode* root){
        if(root->right == nullptr) return root;
        return findLastRight(root->right);
    }
};