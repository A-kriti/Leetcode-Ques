// ques - https://leetcode.com/problems/swap-nodes-in-pairs/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        if(head==NULL || head->next==NULL)return head;
        
        ListNode* curr=head->next;
        ListNode* prev=head;
        
        while(curr!=NULL && curr->next!=NULL){
            
            int t=prev->val;
            prev->val=curr->val;
            curr->val=t;
            
            prev=curr->next;
            curr=curr->next->next;
            
        }
        
        if(curr!=NULL){
            int t=prev->val;
            prev->val=curr->val;
            curr->val=t;
        } 
        return head;
    }
};
