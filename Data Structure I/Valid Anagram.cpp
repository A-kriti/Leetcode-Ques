// ques - https://leetcode.com/problems/valid-anagram/submissions/

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int>m;
        int x=s.size();
        int y=t.size();
        
        if(x!=y){
            return false;
        }
        
        for(int i=0;i<x;i++){
            m[s[i]]++;
        }
        
        int c=0;
        for(int i=0;i<y;i++){
            
            if(m.find(t[i])!=m.end()){
                
                if(m[t[i]]>0){
                    c++;
                    m[t[i]]--;
                }
            }
            
        }
        
        if(c==x){
            return true;
        }
        
        return false;
        
    }
};
