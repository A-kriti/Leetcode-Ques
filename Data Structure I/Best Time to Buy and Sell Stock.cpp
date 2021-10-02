// ques - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        
        int i=0;
        int j=1;
        int ans=0;
        
        while(j<n && i<n){
            
            
            if(prices[i]>prices[j]){
                i=j;
            }
            
            else if(prices[j]-prices[i]>ans){
                ans=prices[j]-prices[i];
            }
            
            else{
                j++;
            }
        }
    
        return ans;
    }
};
