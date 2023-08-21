class Solution {
public:
    void f(int i, int n,int k,vector<int> &subsets,vector<vector<int>> &ans){
        
        if(k == 0){
            ans.push_back(subsets);
            return;
        }
        
        if(k > n-i+1) return; // bcz after that we need certain amount of element in combi.
        if(i > n){
            return;
        }

        // pick 
        subsets.push_back(i);
        f(i+1,n,k-1,subsets,ans); // k-1 bcz we already picked one element

        // not pick
        subsets.pop_back();
        f(i+1,n,k,subsets,ans);

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> subsets;
        vector<vector<int>> ans;

        f(1,n,k,subsets,ans);
        return ans;
    }
};