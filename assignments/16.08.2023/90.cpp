// method one :- useing direct subset
class Solution {
public:
    void f(vector<int> v,int idx,int n, vector<int> tmp, vector<vector<int>> &ans){
        if(idx >= n){
            sort(tmp.begin(),tmp.end());
            ans.push_back(tmp);
            return;
        }
        f(v,idx+1,n,tmp,ans);
        tmp.push_back(v[idx]);
        f(v,idx+1,n,tmp,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> tmp;
        vector<vector<int>> ans;

        f(nums,0,nums.size(),tmp,ans);

        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()), ans.end());
        return ans;
    }
};

// method two :-
// class Solution {
// public:
//     void subset(int idx, vector<int>& tmp, vector<int>& nums, vector<vector<int>>& ans, int n) {
//         ans.push_back(tmp);

//         for (int i = idx; i < n; ++i) {
//             if (i > idx && nums[i] == nums[i - 1]) {
//                 continue; // Skip duplicates
//             }
//             tmp.push_back(nums[i]);
//             subset(i + 1, tmp, nums, ans, n);
//             tmp.pop_back();
//         }
//     }

//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> tmp;
//         vector<vector<int>> ans;

//         sort(nums.begin(), nums.end());

//         subset(0, tmp, nums, ans, n);
//         return ans;
//     }
// };