// ques - https://leetcode.com/problems/time-needed-to-buy-tickets/

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int n=tickets.size();
        int m=tickets[k]-1;
        int c=tickets[k];
        
        int t=0;
        
        while(m>0){
            for(int i=0;i<n;i++){
            
                if(tickets[i]>0)t++;
                tickets[i]--;
            }
            m--;
        }
        
        for(int i=0;i<=k;i++){
            
                if(tickets[i]>0)t++;
                
            }
        return t;
        
        
    }
};
