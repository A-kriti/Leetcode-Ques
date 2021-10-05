// ques - https://leetcode.com/problems/ransom-note/submissions/

class Solution {
public:
    
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int>m;
        
        int x=ransomNote.size();
        int y=magazine.size();
        
        if(x>y){
            return false;
        }
        
        for(int i=0;i<y;i++){
            m[magazine[i]]++;
        }
        
        int c=0;
        for(int i=0;i<x;i++){
            
            if(m.find(ransomNote[i])!=m.end()){
            
                if(m[ransomNote[i]]>0){
                    m[ransomNote[i]]--;
                    c++;
                }
                  
            }
            
        }
        
        if(c==x){
            return true;
        }
        
        return false;
    }
};
