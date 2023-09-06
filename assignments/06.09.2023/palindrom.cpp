#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;

        ListNode* travel = head;
        while(travel != nullptr){
            v.push_back(travel->val);
            travel = travel->next;
        }   

        int n = v.size();
        for(int i = 0 ; i < v.size()/2; i++){
            if(v[i] != v[n-i-1]) return false;
        }
        return true;
        
    }
};