// ques - https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        vector<string>v;
        int n=s.size();
        
        int i=0;
        
         string p="";  
         while(i<n){
              
             p+=s[i];
             
             if((i+1)%k==0){
                 v.push_back(p);
                 p="";
             }
             
             i++;
         } 
        
        
        int r=k-p.size();
        
        if(r<k){
            while(r){
                p+=fill;
                r--;
            }
            v.push_back(p);
        }
        
         
        return v;
        
    }
};
