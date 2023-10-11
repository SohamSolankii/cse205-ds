class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < arr.size(); i++){
            mp[arr[i]]++;
        }

        priority_queue<int> pq;
        for(auto it : mp){
            pq.push(it.second);
        }

        int ans =0, tmp =0;
        while(!pq.empty()){
            ans++;
            tmp += pq.top();
            if(tmp >= arr.size()/2) break;
            pq.pop();
        }

        return ans;
    }
};