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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       unordered_set<ListNode*> st;

        while(headA!=nullptr){
            st.insert(headA);
            headA = headA->next;
        }

        while(headB!=nullptr){
            if(st.count(headB)){return headB;}
            headB = headB->next;
        }

        return nullptr;
    }
};