// ques - https://leetcode.com/problems/middle-of-the-linked-list/submissions/

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
    ListNode* middleNode(ListNode* head) {
        
        int c=0;
        
        ListNode* curr=head;
            
        while(curr!=NULL){
            
            curr=curr->next;
            c++;
        }
        
        int i=0;
        int n=c/2;
        
        while(i<n){
            
            head=head->next;
            i++;
        }
        
        
        return head;
    }
};
