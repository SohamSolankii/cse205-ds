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
    int ll(ListNode* head) {
        int cnt = 0;
        while (head != nullptr) {
            head = head->next;
            cnt++;
        }
        return cnt;
    }

ListNode* removeNthFromEnd(ListNode* head, int n) {
    // method 1 with out slow fast pointer
    // int size = ll(head);
    // int remove = size - n;   

    // // Handle the case where the head needs to be removed
    // if (remove == 0) {
    //     ListNode* temp = head;
    //     head = head->next;
    //     delete temp; // Don't forget to free memory if needed
    //     return head;
    // }

    // ListNode* tmp = head;
    // int jj = 1; 
    // while(jj < remove){
    //     tmp = tmp->next;
    //     jj++;
    // }

    // // cout << remove << endl;
    // // cout << tmp->val << endl;

    // if (tmp->next != nullptr) {
    //     ListNode* toRemove = tmp->next;
    //     tmp->next = tmp->next->next;
    //     delete toRemove; 
    // }
    // else delete tmp->next;

    // return head;

    // method 2 slow fast pointer
    ListNode* slow = head, *fast = head;

    for(int i = 0 ; i < n; i++){
        fast = fast->next;
    }

    if(fast == nullptr){
       return head->next;
    }

    while(fast->next != nullptr){
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = slow->next->next;

    return head;

    }
};