// ques - https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        map<char,int>m;
        for(char x:chars){
            m[x]++;
        }
        
        map<char,int>m1=m;
        int ans=0;
        
        for(string x:words){
            
            int t=0;
            for(int i=0;i<x.size();i++){
                if(m.find(x[i])!=m.end() && m[x[i]]>0){
                    t++;
                    m[x[i]]--;
                }
            }
            if(t==x.size())ans+=t;
            m=m1;
        }
        
        return ans;
    }
};
