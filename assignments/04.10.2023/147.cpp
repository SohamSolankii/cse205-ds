/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head = head->next;
        }

        sort(begin(v),end(v));
        ListNode* dummy = new ListNode(-1);
        ListNode* p =dummy;

        for(auto it : v){
            ListNode* node = new ListNode(it);
            p->next = node;
            p = p->next;
        }

        return dummy->next;
    }
};