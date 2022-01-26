// ques - https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/

class Solution {
public:
    int minSteps(string s, string t) {
        
        map<char,int>m;
        for(char x:s){
            m[x]++;
        }
        
        for(char x:t){
            
            if(m.find(x)!=m.end()){
                m[x]--;
            }
            
        }
        
        int c=0;
        for(auto x:m){
            
            if(x.second>0)c+=x.second;    
        }
        
        return c;
    }
};
