// ques - https://leetcode.com/problems/determine-if-string-halves-are-alike/submissions/

class Solution {
public:
    
    bool isvowel(char x){
        
        if(x=='a' || x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')return true;
        return false;
    }
    
    bool halvesAreAlike(string s) {
        
        int n=s.length();
        
        int c1=0;
        int c2=0;
        
        for(int i=0;i<n/2;i++){
            if(isvowel(s[i]))c1++;
            
            if(isvowel(s[n/2+i]))c2++;
        }
        
        if(c1==c2)return true;
        
        return false;
        
    }
};
