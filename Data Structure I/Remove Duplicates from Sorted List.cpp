// ques - https://leetcode.com/problems/remove-duplicates-from-sorted-list/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        //ListNode* start=NULL;
        //start->next=head;
        ListNode* curr=head;
        
        
        while(curr!=NULL && curr->next!=NULL ){
            
            if(curr->val==curr->next->val){
                    
                ListNode* t=curr->next;
                curr->next=curr->next->next;
                delete(t); 
            
            }
            else{
                
            curr=curr->next;
            
            }
            
        }
        
        
        return head;
        
    }
};
