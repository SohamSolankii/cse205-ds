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
    ListNode* addTwoNumbers(ListNode* h1, ListNode* h2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* p = dummy;
        int carry = 0;

        ListNode* p1 = h1;
        ListNode* p2 = h2;

        while (p1 != nullptr || p2 != nullptr) {
            int x = (p1 != nullptr) ? p1->val : 0;
            int y = (p2 != nullptr) ? p2->val : 0;
            int sum = x + y + carry;
            carry = sum / 10;

            p->next = new ListNode(sum % 10);
            p = p->next;

            if (p1 != nullptr) p1 = p1->next;
            if (p2 != nullptr) p2 = p2->next;
        }

        if (carry > 0) {
            p->next = new ListNode(carry);
        }

        return dummy->next; 
    }

    // use dummy node consept TC(max(h1,h2)) 
};