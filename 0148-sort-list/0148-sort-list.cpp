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
    ListNode* sortList(ListNode* head) {
        if(head==nullptr or head->next==nullptr)return head;
        vector<int> v;
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        while(head!=nullptr)
        {
            v.push_back(head->val);
            head = head->next;
        }
        sort(v.begin(),v.end());
        int i = 0;
        while(i<v.size())
        {
            ListNode* a = new ListNode(v[i]);
            dummy->next = a;
            dummy = dummy->next;
            i++;
        }
        return ans->next;
    
    }
};