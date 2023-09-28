class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                if(!st.empty())
                    st.pop();
            }
            else 
            st.push(s[i]);
        } 
        string ans = "";
        while(!st.empty()){ 
            char c=st.top();
            st.pop();
            ans.push_back(c);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};