class Solution {
public:
    bool isValid(string s) {
        stack<char> st;  
        for(auto i:s)  
        {
            if(i=='(' or i=='{' or i=='[') st.push(i);  
            else 
            {
                char c = st.top();
        if(st.empty()or(c=='(' and i!=')')or(c=='{' and i!='}')or(c=='[' and i!=']'))
                return false;
                st.pop();
            }
        }
        return st.empty(); 
    }
};