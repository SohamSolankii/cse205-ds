class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // map<int,int> mp;
        // for(auto it : nums) mp[it]++;

        // priority_queue<pair<int,int>> pq;
        // vector<int> ans;

        // for(auto it : mp){
        //     pq.push({it.second, it.first});

        //     if(pq.size() > (int)(mp.size()-k)){
        //         ans.push_back(pq.top().second);
        //         pq.pop();
        //     }
        // }

        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        vector<pair<int,int>> vp;
        for(auto it : mp){
            vp.push_back({it.second,it.first});
        }

        sort(vp.rbegin(),vp.rend());
        int ans =0, cnt =0;

        vector<int> v;

        for(auto it : vp){
           if(cnt == k) break;
           cnt++;
           v.push_back(it.second);
        }
        return v;
    }
};