class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
       
        for(int i=0; i<s.size(); i++) {
            string word;
            if(s[i]==' ') continue; 
            while(i<s.size() && s[i]!=' ' ) { 
                word += s[i]; i++;
            }
            v.push_back(word); 
        }

        if(pattern.size() != v.size()) return 0;

        set<string> st;
        unordered_map<char,string> mp;
        for(int i = 0;i<pattern.size(); i++){
            char c = pattern[i];

            if(mp.find(c) != mp.end()) {
                if(mp[c] != v[i])
                    return 0;
            }
            else{
                if(st.count(v[i]) > 0) return 0;

                mp[c] = v[i];
                st.insert(v[i]);
            }
        }

        return 1;
    }
};