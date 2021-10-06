// ques - https://leetcode.com/problems/permutation-in-string/submissions/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int x=s1.size();
        int y=s2.size();
        
        unordered_map<char,int>m;
        
        for(int i=0;i<x;i++){
            m[s1[i]]++;
        }
        
        int j=0;
        int i=0;
        
        int count=m.size();
        
        while(j<y){
            
            if(m.find(s2[j])!=m.end()){
                m[s2[j]]--;
                
                if(m[s2[j]]==0)
                    count--;
                
                    
            }
            
            if(j-i+1<x){
                j++;
            }
            
            else if(j-i+1==x){
                
                if(count==0){
                    return true;
                }
                
                else{
                    if(m.find(s2[i])!=m.end()){
                        m[s2[i]]++;
                        if(m[s2[i]]==1)count++;
                    }
                        
                }
                
                i++;
                j++;
            }
                
        }
        
        
        return false;
        
    }
};
