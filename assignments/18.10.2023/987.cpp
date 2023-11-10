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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>m;
        vector<vector<int>>a;

        if(!root)return a;

        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});

        while(q.size()){
            auto x = q.front();
            TreeNode* node=x.first;
            q.pop();
            int val = x.first->val;
            int hd=x.second.first, lvl=x.second.second;
            m[hd][lvl].insert(val);
            if(node->left){
                q.push({node->left,{hd-1,lvl+1}});
            }
            if(node->right){
                q.push({node->right,{hd+1,lvl+1}});
            }
        }

        for(auto i : m){
            vector<int>v;
            for(auto j:i.second){
                for(auto g : j.second)
                v.push_back(g);
            }
            a.push_back(v);
        }
        return a;
    
    }

    // mapping horigontal distance ----- <lvl, value>
};
