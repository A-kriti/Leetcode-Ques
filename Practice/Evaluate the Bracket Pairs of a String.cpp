// ques - https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/

class Solution {
public:
    
    static string check(string &s,int &i,map<string,string>&m){
        
        string t="";
        i+=1;
        
        while(s[i]!=')'){
            t+=s[i++];
            
        }
        
        if(m.find(t)!=m.end())return m[t];
        
        return "?";
    }
    
    
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        map<string,string>m;
        int n=knowledge.size();
        
        for(int i=0;i<n;i++){
            m[knowledge[i][0]]=knowledge[i][1];
        }
        
        int n1=s.size();
        
        string a="";
        
        for(int i=0;i<n1;i++){
            
            if(s[i]=='(') a+=check(s,i,m);
            else a+=s[i];
         }
        
        return a;
        
    }
};
