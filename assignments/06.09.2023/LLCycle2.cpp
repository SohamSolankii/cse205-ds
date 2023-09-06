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
    ListNode *detectCycle(ListNode *head) {
        
        // method 1 using set
        // unordered_set<ListNode*> st;

        // while(head != nullptr){
        //     if(st.count(head)){
        //         return head;
        //     }
        //     st.insert(head);
        //     head = head->next;
        // }

        // return nullptr;

        // method 2 using Floyd's Tortoise and Hare Algorithm
        // ListNode* slow = head;
        // ListNode* fast = head;

        // while(fast != nullptr and fast->next != nullptr){
        //     slow = slow-> next;
        //     fast = fast->next->next;

        //     if(slow == fast){
        //         while(head != slow){
        //             head = head->next;
        //             slow = slow->next;
        //         }
        //         return head;
        //     }
        // }

        // return nullptr;

        // not diffrent method but we can also do by the not traveling head
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
          
                slow = head;
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
            return slow;
            }
        }

        return nullptr;
    }
};