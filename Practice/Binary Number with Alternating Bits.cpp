// ques - https://leetcode.com/problems/binary-number-with-alternating-bits/submissions/

class Solution {
public:
    
    
    bool hasAlternatingBits(int n) {
        
        stack<int>t;
        
        while(n>0){
            
            int q=n%2;
            if(t.empty()){
                t.push(q);
            }
            
            else{
                if(t.top()==q){
                    return false;
                }
                else{
                    t.push(q);
                }
            }
            
            
            n=n/2;
        }
        
        return true;
    }
};
