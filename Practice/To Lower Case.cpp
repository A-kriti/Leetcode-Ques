// ques - https://leetcode.com/problems/to-lower-case/

class Solution {
public:
    string toLowerCase(string s) {
        
        int n=s.length();
        for(int i=0;i<n;i++){
            
            int x=s[i];
            if(x>=65 && x<=90){
                x=x+32;
                char t=x;
                s[i]=t;
            }
        }
        
        return s;
        
    }
};
