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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* m=l1;
    ListNode* n=l2;
    ListNode* sum =new ListNode (0);
    ListNode*temp=sum;
    int c =0;
 ////////////////////////////////////////////both same loop
    while(m!=NULL && n != NULL){
        int a = c+m->val+n->val;
        if(a>=10){
          ListNode * t= new ListNode (a%10);
          c=a/10;
     sum->next= t;
     sum=sum->next;

        }
        else{
     ListNode * t= new ListNode (a);
     c=0;
     sum->next= t;
     sum=sum->next;

    } m= m->next; 
     n= n->next;
    }
///////////////////////////////////////////////////////////
    while(m!=NULL){
        int a = c+m->val;
        if(a>=10){
      ListNode * t= new ListNode (a%10);
      c=a/10;
     sum->next= t;
     sum=sum->next;
        }
        else{
          ListNode * t= new ListNode (a);
     c=0;
     sum->next= t;
     sum=sum->next;
        }
        m=m->next;
    }
////////////////////////////////////////
 while(n!=NULL){
        int a = c+n->val;
        if(a>=10){
      ListNode * t= new ListNode (a%10);
      c=a/10;
     sum->next= t;
     sum=sum->next;
        }
        else{
          ListNode * t= new ListNode (a);
     c=0;
     sum->next= t;
     sum=sum->next;
        }
        n=n->next;
    }


    if(c){
        ListNode * t= new ListNode (c);
        sum->next=t;
        sum=sum->next;
    }
   return temp->next;
    }
};