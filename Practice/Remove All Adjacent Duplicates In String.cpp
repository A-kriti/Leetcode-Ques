// ques - https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>t;
        int n=s.length();
       
        for(int i=0;i<n;i++){
        
            if(t.empty())
                t.push(s[i]);
                
            else if(t.top()==s[i])
                t.pop();
            
            
            else
                t.push(s[i]);
            
        }
        
        string ans="";
        while(!t.empty()){
            
            ans+=t.top();
            t.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
