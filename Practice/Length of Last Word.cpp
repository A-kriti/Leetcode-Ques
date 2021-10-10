// ques - https://leetcode.com/problems/length-of-last-word/submissions/

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n=s.length();
        int j=n-1;
        
        
        while(j>=0){
               
            if(s[j]!=' '){
               break;
            }
              j--;   
        
        }
        
        if(j<=1){
            return 1;
        }
        
        int i=j;
        int c=0;
        while(i>=0 && j>=0){
            
            if(s[i]!=' '){
                c++;    
            }
            
            if(s[i]==' '){
                    break;
                }
            
            i--;
        }
        
        return c;
    }
};
