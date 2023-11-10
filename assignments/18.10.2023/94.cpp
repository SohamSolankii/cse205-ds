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
    void inorder(TreeNode* root, vector<int>& nodes) {
        if (!root) {
            return;
        }
        inorder(root -> left, nodes);
        nodes.push_back(root -> val);
        inorder(root -> right, nodes);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        // vector<int> nodes;
        // inorder(root, nodes);
        // return nodes;

        vector<int> ans;
        morisTravel(root, ans);
        return ans;
    }


    TreeNode* getRightMostNode(TreeNode* leftNode, TreeNode* curr){
        while(leftNode->right != nullptr and leftNode->right != curr){
            leftNode = leftNode->right;
        }

        return leftNode;
    }

    vector<int> morisTravel(TreeNode* node, vector<int> &ans){
        TreeNode* curr = node;

        while(curr != nullptr){
            TreeNode* leftNode = curr->left;

            if(leftNode == nullptr){
                ans.push_back(curr->val);
                curr = curr->right;
            }
            else{
                TreeNode* rightMostNode = getRightMostNode(leftNode, curr);

                if(rightMostNode->right == nullptr){ // thread creat
                    rightMostNode->right = curr;
                    curr = curr->left;
                }
                else{       // thread cut
                    rightMostNode->right = nullptr;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }

        return ans;
    }
};