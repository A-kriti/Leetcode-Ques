// ques - https://leetcode.com/problems/valid-palindrome/submissions/

class Solution {
public:
    
    bool ischar(char x){
        
        int t=int(x);
        if(t>=97 && t<=122 || t>=65 && t<=90 || t>=48 && t<=57){
            return true;
        }
        
        return false;
        
    }
    
    bool isPalindrome(string s) {
        
        int n=s.length();
        string r="";
        
        for(int i=0;i<n;i++){
            
            if(ischar(s[i])){
                r+=tolower(s[i]);
            }
              
        }
        
        for(int i=0;i<r.size()/2;i++){
            
            if(r[i]!=r[r.size()-1-i]){
                return false;
            }
        }
        
        return true;
    }
};
