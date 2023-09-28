class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {

        int ans = 0;
        // for(auto i : v){
        //     int tmp = 0;
        //     for(auto j : i){
        //         tmp += j;
        //     }
        //     ans = max(ans,tmp);
        // }

        for(auto it : v){
            ans = max(ans,accumulate(it.begin(),it.end(),0));
        }

        return ans;
        
    }
};