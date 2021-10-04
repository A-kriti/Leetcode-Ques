// ques - https://leetcode.com/problems/valid-parentheses/submissions/

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> p;
        
        int n=s.length();
        
        for(int i=0;i<n;i++){
            
            if(p.empty()){
                p.push(s[i]);
            }
            
            else{
                
                if(p.top()=='{' && s[i]=='}' || p.top()=='(' && s[i]==')' || p.top()=='[' && s[i]==']'){
                    
                    p.pop();
                }
                
                else{
                    p.push(s[i]);
                }
            }
        }
        
        if(p.empty()){
            return true;
        }
        
        return false;
        
    }
};
