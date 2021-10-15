// ques - https://leetcode.com/problems/happy-number/submissions/

class Solution {
public:
    bool isHappy(int n) {
        
        if(n==1 || n==7) return true;
        if(n<10) return false;
        int sum=0;
        while(n){
            
            int r=n%10;
            sum+=r*r;
            n=n/10;
            
        }
        
        return isHappy(sum);
    }
};
