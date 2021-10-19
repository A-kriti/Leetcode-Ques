// ques - https://leetcode.com/problems/find-the-difference/

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int x=s.length();
        int y=t.length();
        
        unordered_map<char,int>m;
        
        for(int i=0;i<x;i++){
            m[s[i]]++;
        }
        
        char ans;
        for(int i=0;i<y;i++){
            
            if(m[t[i]]==0){
                ans=t[i];
            }
            if(m.find(t[i])==m.end()){
                ans=t[i];
            }
            else{
                 m[t[i]]--;
            }
           
        }
        
        return ans;
        
    }
};
