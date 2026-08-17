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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
        return head;
        int n=1;
          ListNode *t =head;
        
          
        while(t->next!=NULL){
            n++;
       t = t->next;
    }
        // t mera last node ko point kar rha hai 
             k = k%n;
             if(k == 0)
            return head;
         int s = n-k;
          ListNode *tt =head;
          ListNode *prev =NULL;

        for(int i =1;i<=s;i++){
        prev= tt;
        tt=tt->next;
        }
        prev->next=NULL;
        t->next=head;
        head= tt;
        return head;
    }
};