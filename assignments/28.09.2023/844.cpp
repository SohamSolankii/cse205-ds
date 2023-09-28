class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s1, s2;

        for(int i = 0; i < S.size(); i++){
                 
                 if(S[i] == '#' && !s1.empty())
                         s1.pop();
                 
                 else if(S[i] != '#')
                         s1.push(S[i]);
                 
        }
         
        for(int i = 0; i < T.size(); i++){
                 
                 if(T[i] == '#' && !s2.empty())
                         s2.pop();
                 
                 else if(T[i] != '#')
                         s2.push(T[i]);
                 
        }
        return s1 == s2;

    }
};