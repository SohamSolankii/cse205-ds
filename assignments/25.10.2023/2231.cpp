class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        vector<int> even, odd;
        for(auto it : s)
        {
            if((int)it%2==0)
                even.push_back((int)it);
            else
                odd.push_back((int)it);
        }

        sort(even.begin(), even.end(), greater<int>());
        sort(odd.begin(), odd.end(), greater<int>());

        int j=0, k=0;
        string ans = "";
        for(int i=0 ; i<s.size() ; i++)
        {
            if((int)s[i]%2==0)
            {
                ans += even[j];
                j++;
            }
            else
            {
                ans += odd[k];
                k++;
            }
        }
        return stoi(ans);
    }
};