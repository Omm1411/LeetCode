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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr or head->next==nullptr)return head;
        ListNode* a = head;
        ListNode* b = head->next;
        while(b!=nullptr)
        {
            if(a->val==b->val)
            {
                a->next = b->next;
                b = b->next;
            }
            else
            {
                a = a->next ;
                b = b->next;
            }
        }
        return head;
    }
};