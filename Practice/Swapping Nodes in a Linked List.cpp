// ques - https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        int n=0;
        ListNode* curr=head;
        ListNode* from_begining=head;
        ListNode* from_end=head;
        
        while(curr!=NULL){
            n++;
            curr=curr->next;
        }
        
        int i=0;
        while(i<k-1){
            from_begining=from_begining->next;
            i++;
        }
        
        int j=0;
        while(j<n-k){
            from_end=from_end->next;
            j++;
        }
        
        swap(from_end->val,from_begining->val);
        
        return head;
    }
};
