
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* a = head;
        ListNode* b = head;
        ListNode* last = new ListNode(0);
        ListNode* ans = last;

        while (b != nullptr) {
            if (b->next != nullptr && b->val == b->next->val) {
                int duplicate = b->val;

                while (b != nullptr && b->val == duplicate) {
                    b = b->next;
                }

                last->next = b;
                a = b;
            }
            else {
                last->next = b;
                last = b;
                b = b->next;
                a = b;
            }
        }

        last->next = nullptr;
        return ans->next;
    }
};
