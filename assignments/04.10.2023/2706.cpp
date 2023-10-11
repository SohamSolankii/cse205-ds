class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        multiset<int> st;
        for(auto it : prices) st.insert(it);
        
        int tmp = money;
        money -= *st.begin();
        money -= *next(st.begin(), 1);

        return money > -1 ? money : tmp;
    }
};