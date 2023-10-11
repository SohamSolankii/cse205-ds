class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> q;
        vector<int> ans;

        for(int i = 0 ; i < nums.size(); i++){
            q.push(nums[i]);
        }
        while(!q.empty()){
            ans.push_back(q.top());
            q.pop();
        }

        return ans;	
    }
};