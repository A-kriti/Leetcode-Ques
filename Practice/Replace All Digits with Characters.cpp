// ques - https://leetcode.com/problems/replace-all-digits-with-characters/submissions/

class Solution {
public:
    string replaceDigits(string s) {
        
        
        int n=s.length();
        for(int i=0;i<n-1;i+=2){
            
            s[i+1]+=s[i]-'0';

        }
        
        return s;
    }
};
