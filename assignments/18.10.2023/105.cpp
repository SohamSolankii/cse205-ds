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
TreeNode* construct(vector<int>& preorder,int preStart,int preEnd,vector<int>& inorder,int  inStart,int inEnd,map<int,int>& mp){

    if(preStart > preEnd || inStart > inEnd) return nullptr;

    TreeNode* node = new TreeNode(preorder[preStart]);

    int inRoot = mp[node->val];
    int left = inRoot - inStart;

    node->left = construct(preorder, preStart+1, preStart+left,inorder,inStart,inRoot-1,mp);
    node->right = construct(preorder,preStart+left+1, preEnd,inorder,inRoot+1,inEnd,mp);

    return node;
}
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preStart = 0, preEnd = preorder.size() - 1;
        int inStart = 0, inEnd = inorder.size() - 1;

        map <int, int> mp;
        for(int i = 0 ; i < inorder.size(); i++ ) mp[inorder[i]] = i;

        return construct(preorder, preStart, preEnd, inorder, inStart, inEnd, mp);        
    }
};