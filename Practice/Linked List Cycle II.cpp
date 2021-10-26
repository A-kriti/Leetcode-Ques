// ques -> https://leetcode.com/problems/linked-list-cycle-ii/

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
    ListNode *detectCycle(ListNode *head) {
        
        unordered_map<ListNode*,int>m;
        
        while(head){
            
            if(!m[head]){
                m[head]=1;
                head=head->next;
            }
            
            else{
                return head;
            }
        }
        return head;
    }
};
