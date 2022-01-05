// ques - https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence/

class Solution {
public:
    bool areNumbersAscending(string s) {
        
        int n=s.length();
        int p=0;
        int c=0;
        for(int i=0;i<n;i++){
            
            if(isdigit(s[i])){
                
                c=c*10+(s[i]-'0');
            }
            
            else if(c!=0){
                
                if(p>=c){
                    return false;
                    
                }
                p=c;
                c=0;
            }
               
        }
        
        return c==0 || p<c;
    }
};
