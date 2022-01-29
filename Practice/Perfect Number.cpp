// ques - https://leetcode.com/problems/perfect-number/

class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        if(num<=1) return false;
        int x=num;
        int ans=1;
        for(int i=2;i<x;i++){
            if(num%i==0){
                
                ans+=i;
                ans+=num/i;
                x=num/i;
            }
            
        }
        
        return ans==num;
        
    }
};
