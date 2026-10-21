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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* prev = nullptr;
        ListNode* curr = l1;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        l1 = prev;
        prev = nullptr;
        curr = l2;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        l2 = prev;
        int carry = 0;
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        while (l1 != nullptr or l2 != nullptr) {
            int a = 0;
            int b = 0;

            if (l1 != nullptr)
                a = l1->val;
            if (l2 != nullptr)
                b = l2->val;
            int sum = (a + b + carry);
            carry = sum/10;
            int digit = sum%10;
            ListNode* temp = new ListNode(digit);
            dummy->next = temp;
            dummy = dummy->next;
            if(l1!=nullptr)l1 = l1->next;
            if(l2!=nullptr)l2 = l2->next;
        }
        if(carry!=0)
        {
            ListNode* temp = new ListNode(carry);
            dummy->next = temp;
        }
        curr = ans->next;
        prev = nullptr;
        while(curr!=nullptr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};