// ques - https://leetcode.com/problems/power-of-three/submissions/


class Solution {
public:
    bool isPowerOfThree(int n) {
        
        int c=0;
        if(n==0)return false;
        if(n==1)return true;
     
        while(n>0){
            
            if(n%3==0){
                n=n/3;
                if(n==1){
                    return true;
                }
            }
            
            else{
                return false;
            }
            
        }
        return false;
    }
};
