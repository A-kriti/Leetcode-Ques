//ques - https://leetcode.com/problems/richest-customer-wealth/submissions/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int n=accounts.size();
        int m=accounts[0].size();
        
        int ans=INT_MIN;
        
        for(int i=0;i<n;i++){
            
            int t=0;
            for(int j=0;j<m;j++){
                t+=accounts[i][j];
            }
            ans=max(ans,t);
            
        }
         
        return ans;
        
    }
};
