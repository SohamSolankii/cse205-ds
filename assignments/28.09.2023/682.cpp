class Solution {
public:
    int calPoints(vector<string>& v) {
        stack<int> st;

        for(int i = 0 ; i < v.size(); i++){
            if(v[i] != "+" && v[i] != "D" && v[i] != "C") st.push(stoi(v[i]));

            if(v[i] == "+" and st.size() >=2 ){
                int tmp = st.top();
                st.pop();
                int k = tmp + st.top();
                st.push(tmp);
                st.push(k);
            }

            if(v[i] == "D" and !st.empty()) {
                int k = st.top();
                st.push((k*2));
            }
            if(v[i] == "C" and !st.empty()) st.pop();
        }


        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};