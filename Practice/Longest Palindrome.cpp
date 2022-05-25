// ques - https://leetcode.com/problems/longest-palindrome/

class Solution {
public:
    int longestPalindrome(string s) {
        
        map<char,int>m;
        int len=0;
        
        for(char x:s){
            m[x]++;
        }
        
        if(m.size()==1){
            for(auto x:m)return x.second;
        }
        
        for(auto x:m){
            if(x.second%2==0)len+=x.second;
            
            else len+=x.second-1;
        }
        
        if(len==s.length())return len;
        
        return len+1;
    }
};
