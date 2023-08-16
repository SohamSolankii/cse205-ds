class Solution {

public:
    void solve(vector<int> nums, vector<int> tmp, int index , vector<vector<int>>& ans){
        if(index >= nums.size()){
            ans.push_back(tmp);
            return;
        }

        solve(nums, tmp, index+1,ans);
        tmp.push_back(nums[index]);
        solve(nums,tmp,index+1,ans);
        tmp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        
        solve(nums, tmp, 0, ans);
        return ans;

    }
};