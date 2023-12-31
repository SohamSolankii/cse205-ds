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
    // void inorder(TreeNode* root, vector<int>& nodes) {
    //     if (!root) {
    //         return;
    //     }
    //     nodes.push_back(root -> val);
    //     inorder(root -> left, nodes);
    //     inorder(root -> right, nodes);
    // }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> nodes;
        if(!root) return nodes;

        // inorder(root, nodes);
        // return nodes;

        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            root = st.top();
            st.pop();

            nodes.push_back(root->val);
            if(root->right) st.push(root->right);
            if(root->left) st.push(root->left);
        }

        return nodes;
    }
};  