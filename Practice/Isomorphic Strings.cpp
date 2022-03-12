// ques - https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int n=s.size();
        if(n!=t.size())return false;
        
        map<char,char>m;
        set<char>st;
        
        for(int i=0;i<n;i++){
            
            if(m.find(s[i])!=m.end()){
                if(m[s[i]]!=t[i])return false;
            }
            
            else {
                if(st.count(t[i])>0)return false;
                
                st.insert(t[i]);
                m[s[i]]=t[i];
            }
        }
        
        return true;
    }
};
