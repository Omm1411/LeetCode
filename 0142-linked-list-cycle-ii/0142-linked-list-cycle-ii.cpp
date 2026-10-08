/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(fast==slow)
            {
                slow=head;
                break;
            }
        }
        if(fast==nullptr or fast->next==nullptr)return nullptr;
        while(fast!=slow)
        {   
            fast= fast->next;
            slow = slow->next;
        }
        return slow;
    }
};