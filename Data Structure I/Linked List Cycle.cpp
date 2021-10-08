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
        
       return false; 
    }
};
