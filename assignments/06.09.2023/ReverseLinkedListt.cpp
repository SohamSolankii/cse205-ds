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
    ListNode* reverseList(ListNode* head) {
        ListNode* previousNode = nullptr;
        ListNode* currNode = head;

        while(currNode != nullptr){
            ListNode* nextNode = currNode->next;
            currNode->next = previousNode;

            previousNode = currNode;
            currNode = nextNode;
        }

        return previousNode;
    }

    // TC O(n) SC O(1)
};