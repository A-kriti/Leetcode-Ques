// ques - https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        
        stack<char>t;
        int n=s.length();
        
        int ans=INT_MIN;
        int c=0;
        for(int i=0;i<n;i++){
            
            if(s[i]=='(')c++;
            
            if(t.empty()){
                
                if(s[i]=='(' || s[i]==')'){
                    t.push(s[i]);
                }
            }
            
            else if(t.top()=='(' && s[i]==')'){
                t.pop();
                c--;
            }
            
            else{
                if(s[i]=='(' || s[i]==')'){
                    t.push(s[i]);
                }
                
            }
            ans=max(ans,c);
        }
        
        return ans;
        
    }
};
