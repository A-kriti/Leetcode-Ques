// ques - https://leetcode.com/problems/uncommon-words-from-two-sentences/

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        int n1=s1.length();
        int n2=s2.length();
        
        map<string,int>m;
        
        int i=0;
        string t="";
        while(i<n1){

            if(s1[i]==' '){
                m[t]++;
                i++;
                t="";
            }
            t+=s1[i];
            i++;
        }
        m[t]++;
        
        int j=0;
        string t1="";
        while(j<n2){
            
            if(s2[j]==' '){
                
                m[t1]++;
                j++;
                t1="";
            }
            t1+=s2[j];
            j++;
        }
        m[t1]++;
        
        vector<string>v;
        for(auto x:m){
            if(x.second==1)v.push_back(x.first);
        }
        
        return v;
    }
};
