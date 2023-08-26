class Solution {
public:
    void f(int cnt1, int cnt2,int n,string &tmp,vector<string> &ans,int idx){
        if(idx >= (2*n)){
            ans.push_back(tmp);
            return;
        }

        // left bracket
        if(cnt1 < n and idx < n*2-1){
            tmp += '(';
            f(cnt1+1,cnt2,n,tmp,ans,idx+1);
            tmp.pop_back();
        }
        // right bracket
        if(cnt2 < cnt1 and idx > 0){
            tmp += ')';
            f(cnt1,cnt2+1,n,tmp,ans,idx+1);
            tmp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string tmp = "";

        f(0,0,n,tmp,ans,0);
        return ans;
    }
};