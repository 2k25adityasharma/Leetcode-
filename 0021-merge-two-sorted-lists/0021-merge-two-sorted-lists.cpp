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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
           ListNode* sum = new ListNode(0);
           ListNode* head = sum;
           ListNode* m = list1;
           ListNode* n= list2;
           ListNode* t= sum;
       while (m != NULL && n != NULL) {
    if (m->val <= n->val) {
        t->next = m;
        m = m->next;
    } else {
        t->next = n;
        n = n->next;
    }
    t = t->next;
}
      while(m!=NULL){
        t->next=m;
        t=t->next;
        m=m->next;
      }
      while(n!=NULL){
        t->next=n;
        t= t->next;
        n=n->next;
      }

        
           
 return sum->next;
    }
};