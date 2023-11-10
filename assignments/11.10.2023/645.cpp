class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v(nums.size()+1);

        for(auto it : nums){
            v[it]++;
        }

        vector<int> ans;
        for(int i =1; i <= nums.size(); i++){
            if(v[i] > 1){
                ans.insert(ans.begin(),i);
            }
            else if (v[i] == 0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};