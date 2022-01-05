//ques - https://leetcode.com/problems/evaluate-reverse-polish-notation/


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<string>t;
        int n=tokens.size();
        
        for(int i=0;i<n;i++){
            
            if(t.empty())t.push(tokens[i]);
            
            t.push(tokens[i]);
            
            if(t.top()=="+"){
                
                t.pop();
                int x=stoi(t.top());
                t.pop();
                int y=stoi(t.top());
                t.pop();
                
                int z=x+y;
                t.push(to_string(z));
                 
            }
            
            else if(t.top()=="-"){
                
                t.pop();
                int x=stoi(t.top());
                t.pop();
                int y=stoi(t.top());
                t.pop();
                
                int z=y-x;
                t.push(to_string(z));
                 
            }
            
            else if(t.top()=="*"){
                
                t.pop();
                int x=stoi(t.top());
                t.pop();
                int y=stoi(t.top());
                t.pop();
                
                int z=x*y;
                t.push(to_string(z));
                 
            }
            
            else if(t.top()=="/"){
                
                t.pop();
                int x=stoi(t.top());
                t.pop();
                int y=stoi(t.top());
                t.pop();
                
                int z=y/x;
                t.push(to_string(z));
                 
            }
            
            
            
        }
        
        int ans=stoi(t.top());
        
        return ans;
        
        
        
    }
};
