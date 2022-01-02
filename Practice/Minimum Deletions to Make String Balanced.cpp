// ques - https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/

class Solution {
public:
    int minimumDeletions(string s) {
        
        
        int n=s.size();
        int c=0;
        stack<char>t;
        
        int i=n-1;
        while(i>=0){
            
            if(t.empty()){
                t.push(s[i]);
                
            }
            
            else if(t.top()=='a' && s[i]=='b'){
                c++;
                t.pop();
                
            }
            
            else t.push(s[i]);
            
            i--;
        }    

        return c;
    }
};
