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
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }

        // two pointer with diffrent state
        // ListNode* slow = head;
        // ListNode* fast = head->next;

        // while(fast != nullptr){
        //     fast = fast->next;
        //     if(fast != nullptr) fast = fast->next;
        //     slow = slow->next;
        // }

        // two pointers with the same state
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    // approch : slow pointer and the fast pointer
};