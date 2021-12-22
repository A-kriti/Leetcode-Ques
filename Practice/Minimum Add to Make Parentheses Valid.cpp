// ques - https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

class Solution {
public:
    int minAddToMakeValid(string s) {
        
        stack<char>t;
        int n=s.length();
        
        
        for(int i=0;i<n;i++){
        
            
            if(t.empty()){
                t.push(s[i]);
            }
            
            else{
                if(t.top()=='(' && s[i]==')'){
                t.pop();

                }
            
            
                else{
                    t.push(s[i]);

                }
            }
            
        }
        
        int ans=t.size();
        
        return ans;
    }
};
