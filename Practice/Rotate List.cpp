// ques - https://leetcode.com/problems/rotate-list/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        int n=0;
        
        ListNode* curr= head;
        while(curr!=NULL){
            n++;
            curr=curr->next;
        }
        
        if(n<=1)return head;
        
        int t=k%n;
        while(t){
            ListNode* temp=head;
            
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            
            temp->next->next=head;
            head=temp->next;
            temp->next=NULL;
            
            t--;    
        }
        
        return head;
    }
};
