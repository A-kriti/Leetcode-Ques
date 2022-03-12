// ques - https://leetcode.com/problems/word-pattern/


class Solution {
public:
    vector<string> splitstring(string s){
        
        vector<string>v;
        s+=' ';
        int x=s.size();
        
        int i=0;
        string t="";
        while(i<x){
            
            if(s[i]==' '){
                v.push_back(t);
                t="";
                i++;
            }
            t+=s[i];
            i++;
        }
        
        return v;
        
    }
        
    bool wordPattern(string pattern, string s) {
        
        map<char,string>m;
        int n=pattern.size();
        set<string>st;
        vector<string>s_vec=splitstring(s);
        
        if(n!=s_vec.size())return false;
        
        for(int i=0;i<n;i++){
            if(m.find(pattern[i])!=m.end()){
                if(m[pattern[i]]!=s_vec[i])
                    return false;    
            }
            
            else{
                if(st.count(s_vec[i])>0)return false;
                
                m[pattern[i]]=s_vec[i];
                st.insert(s_vec[i]);
            }   
        }
        
        return true;
    }
};
