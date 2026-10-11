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
    int pairSum(ListNode* head) {
        ListNode* copy = nullptr;
        ListNode* tail = nullptr;

        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* node = new ListNode(curr->val);

            if (copy == nullptr) {
                copy = node;
                tail = node;
            } else {
                tail->next = node;
                tail = node;
            }

            curr = curr->next;
        }
        ListNode* prev = nullptr;
        curr = copy;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        ListNode* a = head;
        ListNode* b = prev;
        int max = INT_MIN;
        while(a!=nullptr)
        {
            int c = a->val + b->val;
            if(c>max)max=c;
            a=a->next;
            b=b->next;
        }
        return max;
    }
};