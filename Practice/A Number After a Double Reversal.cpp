// ques - https://leetcode.com/problems/a-number-after-a-double-reversal/

class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        string s1=to_string(num);
        
        if(s1.length()<=1)return true;
        
        
        string s="";
        int x=num;
        
        while(x>=1){
            
            int y=x%10;
            
            if(s.empty() && y==0) return false;
            
            string t=to_string(y);
            s+=t;
          
            
            x=x/10;
        }
        
        
        
        if(s1.length()==s.length())return true;
        
        return false;
    }
};
