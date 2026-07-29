/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>mp;
        
          ListNode *m=headA;
          ListNode *n=headB;
          while(m!=NULL){
            mp[m]++;
            m=m->next;
          }
          while(n!=NULL){
            if(mp.find(n)!=mp.end())
            return n;
            n = n->next;
        }
        
    return NULL;
        
    }
};