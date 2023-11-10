class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       priority_queue<pair<int,int>> pq;
       int i = 0;
       for(auto it : score) pq.push({it,i++});

       vector<string> ans(score.size());
       i = 0;

       while(!pq.empty()){
           ans[pq.top().second] = i==0?"Gold Medal":i==1?"Silver Medal":i==2?"Bronze Medal":to_string(i+1);
           i++;
           pq.pop(); 
       }

       return ans;
    }
};