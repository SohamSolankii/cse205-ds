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
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        ListNode* p1 = h1; // pointer to travel linked list
        ListNode* p2 = h2;

        ListNode* dummy = new ListNode(-1);
        ListNode* p3 = dummy;

        while(p1 != nullptr and p2!=nullptr){

            if(p1->val < p2->val){
                p3->next = p1;
                p1 = p1->next;
            }
            else{
                p3->next = p2;
                p2 = p2->next;
            }
            p3 = p3->next;

        }

        while(p1 != nullptr){
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
        while(p2 != nullptr){
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }

        return dummy->next;
    }
};