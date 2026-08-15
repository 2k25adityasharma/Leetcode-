class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return NULL;

        unordered_map<int, int> mp;

        // Count frequency
        ListNode* t = head;
        while (t != NULL) {
            mp[t->val]++;
            t = t->next;
        }

        // Remove duplicates
        ListNode* p = NULL;
        ListNode* t2 = head;

        while (t2 != NULL) {
            if (mp[t2->val] == 1) {
                p = t2;
                t2 = t2->next;
            }
            else {
                if (p != NULL) {
                    p->next = t2->next;
                }
                else {
                    head = t2->next;
                }

                t2 = t2->next;
            }
        }

        return head;
    }
};