class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int,int> mp;
        // for(auto it : nums) mp[it]++;

        // int ans, tmp = -1;
        // for(auto it : mp) if(it.second > tmp){
        //     tmp = it.second;
        //     ans = it.first;
        // }
        // return ans;

        int major=nums[0], count = 1;
        for(int i=1; i<nums.size();i++){
            if(count==0){
                count++;
                major=nums[i];
            }
            else if(major==nums[i]){
                count++;
            }
            else count--;
            
        }
        return major;

    }
};