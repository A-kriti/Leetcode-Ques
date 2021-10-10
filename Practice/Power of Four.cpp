// ques - https://leetcode.com/problems/power-of-four/

class Solution {
public:
    bool isPowerOfFour(int n) {
        
        
        if(n==1){
            return true;
        }
        
        if(n%4!=0){
            return false;
        }
        while(n>0){
            
            if(n%4==0){
                if(n/4==1){
                    return true; 
                }
               
            }
            else{
                return false;
            }
            n=n/4;
            
            
        }
        
        return false;
    }
};
