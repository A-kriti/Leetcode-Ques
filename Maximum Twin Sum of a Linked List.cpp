// ques - https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/

// Method 1(Brute Force)

class Solution {
public:
 
    int pairSum(ListNode* head) {
        
        vector<int>v;
        ListNode* curr=head;
        
        while(curr!=NULL){
            
            v.push_back(curr->val);
            curr=curr->next;
        }
        
        int n=v.size();
        int j=n-1;
        int i=0;
        int ans=INT_MIN;
        
        while(i<j){
            ans=max(ans,v[i]+v[j]);
            i++;
            j--;
        }
        
        return ans;
    }
};


// Method 2(Optimal)

class Solution {
public:
    static ListNode* reverse(ListNode* slow){
        
        ListNode* curr=slow;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        while(curr!=NULL){
            
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;     
        }
        return prev;
    }
    
    int pairSum(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
       
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=reverse(slow);
        int ans=INT_MIN;
        
        while(slow!=NULL){
            ans=max(ans,slow->val+head->val);
            slow=slow->next;
            head=head->next;    
        }
        return ans;
        
		}
	};
