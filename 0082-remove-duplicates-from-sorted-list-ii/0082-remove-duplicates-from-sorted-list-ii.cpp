class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return NULL;

        unordered_map<int, int> mp;

    
        ListNode* t = head;
        while (t != NULL) {
            mp[t->val]++;
            t = t->next;
        }

while (head != NULL && mp[head->val] > 1) {
    head = head->next;
}
       
        ListNode* p = NULL;
        ListNode* t2 = head;

        while (t2 != NULL) {
            if (mp[t2->val] == 1) {
                p = t2;
                t2 = t2->next;
            }
            else {
             t2=t2->next;
             p->next=t2;
            }
        }

        return head;
    }
};