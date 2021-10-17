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
        
        
        
        string a=r;
        reverse(a.begin(),a.end());
        
        for(int i=0;i<r.size();i++){
            
            if(a[i]!=r[i]){
                return false;
            }
        }
        
        return true;
    }
};
