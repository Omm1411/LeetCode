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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr or head->next==nullptr)return head;
        int count = 0;
        ListNode* it = head;
        while(it!=nullptr)
        {
            count++;
            it = it->next;
        }
        k = k%count;
        if(k==0)return head;
        int a = count-k-1;
        ListNode* temp = head;
        while(a!=0)
        {
            temp = temp->next;
            a--;
        }
        ListNode* b = temp->next;
        while(b->next!=nullptr)
        {
            b=b->next;
        }
        ListNode* newhead = temp->next;
        temp->next = nullptr;
        b->next = head;
        return newhead;
    }
};