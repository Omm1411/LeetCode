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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* counter = head;
        while(counter!=nullptr)
        {
            count++;
            counter = counter->next;
        }
        int position = count - n + 1;
        ListNode* x = head;
        ListNode* y = x;
        if(count==1)return nullptr;
        if(count==n)return head->next;
        for(int i=0;i<position-2;i++)
        {
            x = x->next;
        }
        x->next = x->next->next;
        return y;
    }
};