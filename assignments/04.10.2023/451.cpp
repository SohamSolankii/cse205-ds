class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c: s) mp[c]++;

        priority_queue<pair<int,char>> q;
        for(auto it : mp){
            q.push({it.second, it.first});
        }

        s = "";
        while(!q.empty()){
            s += string(q.top().first, q.top().second);
            q.pop();
        }
        
        return s;
    }
};