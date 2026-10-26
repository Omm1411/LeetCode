
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<int> st;
        ListNode* it = head;
        while (it != nullptr) {
            while (!st.empty() && st.top() < it->val) {
                st.pop();
            }

            st.push(it->val);
            it = it->next;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        while (!st.empty()) {
            ListNode* n = new ListNode(st.top());
            tail->next = n;
            tail = tail->next;
            st.pop();
        }

        ListNode* rev = nullptr;
        ListNode* newhead = dummy->next;

        while (newhead != nullptr) {
            ListNode* temp = newhead->next;
            newhead->next = rev;
            rev = newhead;
            newhead = temp;
        }

        delete dummy;
        return rev;
    }
};
