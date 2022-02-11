// ques - https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        // 2 2 5 6 7 9
        sort(cost.begin(),cost.end());
        int n=cost.size();
        
        if(n<=1)return cost[0];
        
        int i=n-1;
        int c=0;
        while(i>0){
           
            c+=cost[i];
            c+=cost[i-1];
            i-=3;
        }
        
        while(i>=0){
            c+=cost[i];
            i--;
        }
        return c;
    }
};
