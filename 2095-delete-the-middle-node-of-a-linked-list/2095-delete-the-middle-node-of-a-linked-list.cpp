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
    ListNode* deleteMiddle(ListNode* head) {
          if(head == NULL || head->next == NULL)
            return NULL;
    int c = 0;
    ListNode * t = head;
    while(t!=NULL){
        c++;
        t=t->next;
    }
    int n = (c/2);
 int i =1;
 t = head;
while(i<n){
t=t->next;
i++;
}
ListNode * del = t->next;
t->next=t->next->next;
delete del;
return head;
    }
};