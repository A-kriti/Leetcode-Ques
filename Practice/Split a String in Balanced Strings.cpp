// ques - https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        
        int n=s.length();
        int ans=0;
        stack<char>t;
        
        int j=n-1;
        
        while(j>=0){
            
            if(t.empty()) t.push(s[j]);
           
            else if(t.top()=='R' && s[j]=='L' || t.top()=='L' && s[j]=='R') t.pop();
            
            else t.push(s[j]);
                
            if(t.empty()) ans++;
                
            j--;
        }
        
        return ans;

    }
};
