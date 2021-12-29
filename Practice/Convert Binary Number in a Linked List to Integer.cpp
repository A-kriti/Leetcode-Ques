// ques - https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

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
    int getDecimalValue(ListNode* head) {
        
        ListNode* curr=head;
        ListNode* curr1=head;
        int n=0;
        while(curr!=NULL){
            n++;
            curr=curr->next;
        }
        
        int ans=0;
        while(curr1!=NULL){
            ans+=pow(2,n-1)*(curr1->val);
            n--;
            curr1=curr1->next;
        }
        
        return ans;
    }
};
