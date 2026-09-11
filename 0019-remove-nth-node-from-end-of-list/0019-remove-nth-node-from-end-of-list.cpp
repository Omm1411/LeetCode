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
        ListNode* count=head;
        ListNode* temp=head;
        ListNode* ans=temp;
        int counter=0;
        if(!head)return nullptr;
        while(count!=nullptr)
        {
            counter++;
            count=count->next;
        }    
        if(n==counter)return head->next;
        int pos=counter-n;
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return ans;
    }
};