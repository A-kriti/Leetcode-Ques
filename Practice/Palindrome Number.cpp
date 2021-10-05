// ques - https://leetcode.com/problems/palindrome-number/submissions/

class Solution {
public:
    bool isPalindrome(int x) {
        
        
        if(x<0){
            return false;
        }
        
        int y=x;
        
        long int t=0;
        while(y>0){
            
            t=t*10+(y%10);
            y=y/10;
            
        }
        
        if(t==x){
            return true;
        }
        
        return false;
    }
};
