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
    bool hasCycle(ListNode *head) {

        // method 1 using set
        // unordered_set<ListNode*> st;

        // ListNode* travel = head;
        // while(travel != nullptr){

        //     if(st.count(travel)) return true;
        //     st.insert(travel);
        //     travel = travel->next; 

        // } 
        // return false;

        // methode 2 \Floyd's Cycle Finding Algorithm
        ListNode* slow = head;
        ListNode* fast  = head;

        while(fast != nullptr and fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) return true;
        }

        return 0;

    }
    // M1 : TC O(n) SC(n)
    // M2 : TC O(n) SC(1)
};