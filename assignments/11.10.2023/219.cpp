class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(auto i = 0;i<nums.size();i++){
            if(mp.count(nums[i])){
                if(abs(mp[nums[i]]-i) <= k) return 1; 
            }
            mp[nums[i]] = i;
        }
        return 0;
    }
};