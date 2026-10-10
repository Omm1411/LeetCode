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
    ListNode* reverseList(ListNode* head) {
        ListNode* node =nullptr;
        while(head!=nullptr)
        {
            ListNode* temp = head->next;   //for saving the part not yet processed
            head->next = node;             //reversal
            node = head;                   //reversed part is assigned the head 
            head = temp;       // the rest of unprocessed part for next iterations
        }
        return node;
    }
};