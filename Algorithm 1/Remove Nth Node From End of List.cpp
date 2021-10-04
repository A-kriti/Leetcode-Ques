// ques - https://leetcode.com/problems/remove-nth-node-from-end-of-list/


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* start=new ListNode();
        start->next=head;
        
        ListNode* fast=start;
        ListNode* slow=start;
        
        int i=0;
        
        while(i<=n){
            fast=fast->next;
            i++;
        }
        
        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
        ListNode* t=slow->next;
        slow->next=slow->next->next;
        
        delete(t);
        return start->next;
        
    }
};
