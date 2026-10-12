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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* last = dummy;
        if(head==nullptr or head->next==nullptr)return head;
        ListNode* left = head;
        ListNode* right = head->next;
        while(left and right)
        {   
            left->next = right->next;
            right->next = left;
            last->next = right;
            last = last->next->next;
            left = left->next;
            if(left==nullptr)break;
            right = left->next;
        }
        return dummy->next;
    }
};