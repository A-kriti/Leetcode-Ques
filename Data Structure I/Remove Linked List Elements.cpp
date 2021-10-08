// ques - https://leetcode.com/problems/remove-linked-list-elements/submissions/

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
    ListNode* removeElements(ListNode* head, int val) {
        
    
        ListNode* curr=head;
        
        while(curr!=NULL && curr->next!=NULL){
            
            if(curr->next->val==val){
                ListNode* t=curr->next;
                curr->next=curr->next->next;
                delete(t);
                
            }
            
            else{
                curr=curr->next;
            }
        }
    
        if (head == NULL)
        return NULL;
 
        else if(head->val==val){
                
            ListNode* p=head;
            head=head->next;
                delete(p);
        }
        

        return head;
    }
};
