class Solution {
public:
    ListNode* partition(ListNode* head, int x) {

        if(head == NULL || head->next == NULL)
            return head;

        ListNode* first = NULL;  // last node jo < x section me hai
        ListNode* temp = head;   // current node
        ListNode* prev = NULL;

        while(temp != NULL) {

            if(temp->val < x) {

                // Agar temp already first ke turant baad hai,
                // kuch karne ki zarurat nahi
                if(first == NULL) {

                    // temp ko head banana hai
                    if(prev != NULL) {
                        prev->next = temp->next;
                        temp->next = head;
                        head = temp;
                    }

                    first = temp;
                }
                else if(first->next != temp) {

                    // temp ko current position se hatao
                    prev->next = temp->next;

                    // temp ko first ke baad lagao
                    temp->next = first->next;
                    first->next = temp;

                    // first ab temp hai
                    first = temp;
                }
                else {
                    // temp already correct position par hai
                    first = temp;
                }

            }

            prev = temp;
            temp = temp->next;
        }

        return head;
    }
};