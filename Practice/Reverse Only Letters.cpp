// ques - https://leetcode.com/problems/reverse-only-letters/

class Solution {
public:
    static bool isletter(char c){
        
        int t=c;
        if(97<=t && t<=122 || 65<=t && t<=90)return true;
        
        return false;
    }
    
    string reverseOnlyLetters(string s) {
        
        stack<char>st;
        int n=s.size();
        string ans=s;
        
        for(int i=0;i<n;i++){
            if(isletter(s[i])){
                st.push(s[i]);
            }
        }
        
        for(int i=0;i<n;i++){
            if(isletter(s[i])){
                ans[i]=st.top();
                st.pop();
            }
        }
        
        return ans;
    }
};
