class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> mp;

        for(auto it : nums2){
            while(!st.empty() and st.top() < it){
                mp[st.top()] = it;
                st.pop();
            }
            st.push(it);
        }

        for (int i = 0; i < nums1.size(); i++){ 
            nums1[i] = mp.count(nums1[i]) ? mp[nums1[i]] : -1; 
        }
        return nums1;
    }
};