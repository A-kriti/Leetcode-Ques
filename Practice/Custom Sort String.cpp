// ques - https://leetcode.com/problems/custom-sort-string/

class Solution {
public:
    string customSortString(string order, string s) {
        
        map<char,int>m;
        string ans="";
            
        for(char x:s){
            m[x]++;
        }
        
        for(char x:order){
            
            if(m.find(x)!=m.end()){
                while(m[x]>0){
                    ans+=x;
                    m[x]--;
                }
            }
        }
        
        for(auto x:m){
            
            if(x.second>0){
               while(x.second>0){
                    ans+=x.first;
                    x.second--;
                } 
            }
        }
        
        return ans;
    }
};
