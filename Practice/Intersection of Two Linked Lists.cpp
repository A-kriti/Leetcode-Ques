// ques - https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/


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
        ListNode * ans=NULL;
        
        ListNode * cA=headA;
        ListNode * cB=headB;
        
        int l1=0;
        int l2=0;
        
        while(cA!=NULL){
        
            cA=cA->next;
            l1++;
            
           
        }
        
        while(cB!=NULL){
        
            cB=cB->next;
            l2++;
           
        }
        ListNode * currA=headA;
        ListNode * currB=headB;
        
        int p1;
        int p2;
        
        if(l1>l2){
            p1=l1-l2;
            while(p1>0){
        
            currA=currA->next;
            p1--;
            }
        }
        
        
        else if(l1<l2){
            p2=l2-l1;
            while(p2>0){
        
            currB=currB->next;
            p2--;
           
            }
        }
         
        while(currA!=NULL && currB!=NULL){
            
            if(currA==currB){
                ans=currA;
                break;
            }
            currA=currA->next;
            currB=currB->next;
            
        }
              
       return ans;     
            
    }
};
