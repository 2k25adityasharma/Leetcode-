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
    bool hasCycle(ListNode *head) {
        
        if(head==NULL|| head->next==NULL)
        return false;
        unordered_map<ListNode*,int>mp;

        ListNode* t = head;
        while(t!=NULL){
            if(mp.find(t)!=mp.end()){
               return true;
            }

       mp[t]=1;
       t=t->next;
        }

return false;
    }
};