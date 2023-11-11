class BSTIterator {
private:
    stack<TreeNode*> st;
public:
    BSTIterator(TreeNode *root) {
        move_left(root);
    }

    bool hasNext() {
        if (st.empty()) return false;
        return true;
    }

    int next() {
        TreeNode* tmp = st.top();
        st.pop();
        if (tmp->right) move_left(tmp->right);
        return tmp->val;
    }
    
    void move_left(TreeNode* node)
    {
        TreeNode* tmp = node;
        while (tmp) {st.push(tmp);tmp = tmp->left;}
    }
};