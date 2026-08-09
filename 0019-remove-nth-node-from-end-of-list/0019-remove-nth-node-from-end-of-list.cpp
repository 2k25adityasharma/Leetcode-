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
         ListNode *t = head;
         int c =0;
         while(t!=NULL){
        c++;
    t=t->next;
         }

   int res = c-n;
   if(res==0){
     ListNode* del= head;
     head=head->next;
     delete del;
    return head;
   }

   t = head;
    
for (int i = 1; i < res; i++) {
            t = t->next;
        }
  
  ListNode* del= t->next;
   t->next=t->next->next;
   delete del;

  return head;       
    }
};