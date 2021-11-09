// ques - https://leetcode.com/problems/lemonade-change/

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int n=bills.size();
        vector<int>v;
        
        int p1=0;
        int p2=0;
         
        for(int i=0;i<n;i++){
            
            if(bills[i]==5){
               p1++; 
            }
            
            else if(bills[i]==10){
               p1--;
                p2++;
            }
            
            else if(p2>0){
               p1--;
                p2--;
            }
            
            else{
                p1-=3;
            }
            
            if(p1<0) return false;
            
            
        }
         
        return true;
    }
};
