// ques - https://leetcode.com/problems/counting-words-with-a-given-prefix/

class Solution {
public:
    bool check(string pref, string s){
        
        int n=pref.size();
        int i=0;
        int c=0;
        
        while(i<n){
            
            if(pref[i]==s[i])c++;
            
            else return false;
            i++;
        }
        
        return true;
    }
    
    int prefixCount(vector<string>& words, string pref) {
        
        int ans=0;
        
        for(string x:words){
            
            if(check(pref,x))ans++;
        }
        
        return ans;
    }
};
