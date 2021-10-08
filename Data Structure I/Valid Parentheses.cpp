// ques - https://leetcode.com/problems/valid-parentheses/submissions/


class Solution {
public:
    bool isValid(string s) {
        
        stack<char>t;
        int n=s.length();
        
        for(int i=0;i<n;i++){
            
            if(t.empty()){
                t.push(s[i]);
            }
            
            else{
                
                if(t.top()=='(' && s[i]==')'|| t.top()=='{' && s[i]=='}'|| t.top()=='[' && s[i]==']'){
                t.pop();
                }
                
                else{
                   t.push(s[i]); 
                }
            }
            
            
            
            
        }
        
        if(t.empty()){
            return true;
        }
        
        return false;
    }
};
