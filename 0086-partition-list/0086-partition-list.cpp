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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1 = new ListNode(0);
        ListNode* ans = dummy1;
        ListNode* dummy2 = new ListNode(0);
        ListNode* after = dummy2;
        ListNode* it = head;
        while(it!=nullptr)
        {
            if(it->val<x)
            {
                dummy1->next = it;
                dummy1 = dummy1->next;
            }
            else
            {
                dummy2->next = it;
                dummy2 = dummy2->next;
            }
            it = it->next;
        }
        dummy2->next = nullptr;
        dummy1->next = after->next;
        return ans->next;
    }
};