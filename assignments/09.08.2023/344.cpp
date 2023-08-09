class Solution {
public:

    // another method but memory limit 
    // vector<char> f(vector<char> v, int idx, vector<char> tmp){
    //     if(idx == 0) {
    //         tmp.push_back(v[idx]);
    //         return tmp;  
    //     }

    //     tmp.push_back(v[idx]);
    //     return f(v, idx - 1, tmp);  
    // }

    // n/2 TC go half and swap
    void f(int start, int end, vector<char> &s){
        if(start >= end){
            return;
        }

        // char c = s[start];
        // s[start] = s[end];
        // s[end] = c;
        swap(s[start],s[end]);
        f(start+1, end-1,s);
    }
    void reverseString(vector<char>& s) {
        // for method one
        // vector<char> ans;
        // ans = f(s, s.size() - 1, ans);  
        // s = ans; 

        f(0,s.size()-1 ,s);

    }
};