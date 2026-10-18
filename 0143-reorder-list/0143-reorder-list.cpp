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
    void reorderList(ListNode* head) {
        ListNode* temphead = head;
        ListNode* ans = head;
        ListNode* rev = nullptr;
        if (head == nullptr or head->next == nullptr)
            return;
        while (temphead != nullptr) {
            ListNode* a = new ListNode(temphead->val);
            a->next = rev;
            rev = a;
            temphead = temphead->next;
        }
        temphead = head;
        int n = 0;
        while (temphead != nullptr) {
            n++;
            temphead = temphead->next;
        }
        int i = 0;
        while (i < n / 2) {
            ListNode* temp = head->next;
            ListNode* temp2 = rev->next;
            head->next = rev;
            if (n % 2 == 0 && i == n / 2 - 1)
                rev->next = nullptr;
            else
                rev->next = temp;

            head = temp;
            rev = temp2;
            i++;
        }
        if (n % 2 == 1)
            head->next = nullptr;
    }
};