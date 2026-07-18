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
    ListNode* removeElements(ListNode* head, int val) {

    

        
        while (head != NULL && head->val == val) {
            ListNode* del = head;
            head = head->next;
            delete del;
        }

        if (head == NULL)
            return NULL;

        ListNode* p = head;
        ListNode* t = head->next;

        while (t != NULL) {

            if (t->val == val) {
                ListNode* del = t;
                p->next = t->next;
                delete del;
                t = p->next;      // Don't move p
            }
            else {
                p = t;            // Move both pointers
                t = t->next;
            }
        }

        return head;
    }
};