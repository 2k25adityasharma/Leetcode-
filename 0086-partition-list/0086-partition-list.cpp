
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* first = dummy;
        ListNode* temp = head;

        // Find first node >= x
        while (temp != NULL && temp->val < x) {
            first = temp;
            temp = temp->next;
        }

        if (temp == NULL) return dummy->next;

        ListNode* t = temp->next;

        while (t != NULL) {

            if (t->val < x) {

                temp->next = t->next;

                t->next = first->next;
                first->next = t;

                first = t;

                t = temp->next;
            }
            else {
                temp = t;
                t = t->next;
            }
        }

        return dummy->next;
    }
};
