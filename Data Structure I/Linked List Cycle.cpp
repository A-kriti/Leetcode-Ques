// ques - https://leetcode.com/problems/linked-list-cycle/submissions/

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
        
        //Method 1: 2 Pointers
            
        ListNode *slow=head;
        ListNode *fast=head;
        
        
        while(fast!=NULL && fast->next!=NULL){
            
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                return true;
            }
            
        }
        
        
        return false;
        
        
        /*
        Method 2: Hashmap
        
        unordered_map<ListNode *,int>m;
        
        while(head!=NULL){
            
            if(!m[head]){
                m[head]=1;
                head=head->next;
                
            }
            
            else{
                 
                return true;
            }
            
        }
        
       return false; */
    }
};
