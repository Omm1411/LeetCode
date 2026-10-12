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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* last = dummy ;
        ListNode* next = dummy ;
        ListNode* start = head;
        ListNode* end = head;
        int i=1;
        while(i<left)
        {   
            last = start;
            start = start->next;
            i++;
        }
        i = 1;
        while(i<right)
        {
            end = end->next;
            i++;
        }
        next = end->next;
        ListNode* node = nullptr;
        ListNode* curr = start;
        while(curr!=next)
        {
            ListNode* temp = curr->next;
            curr->next = node;
            node = curr;
            curr = temp;
        }
        last->next = node;
        start->next = next;
        return dummy->next;
    }
};