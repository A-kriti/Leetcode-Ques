// ques - https://leetcode.com/problems/sorting-the-sentence/

class Solution {
public:
    string sortSentence(string s) {
        
        map<int,string>m;
        
        int n=s.size();
        
        int i=0;
        string t="";
        while(i<n){
            
            if(isdigit(s[i])){
                int r=s[i]-'0';
                m[r]=t;
                t="";
                i++;
            }
             
            else if(!isdigit(s[i]))t+=s[i]; 
            i++;
            
        }
         
        vector<string>v(m.size()," ");
        
        for(auto x:m){
            int j=x.first-1;
            v[j]=x.second;
        }
        
        string ans="";
        for(auto x:v){
            ans+=x;
            ans+=" ";
            
        }
        
        ans.pop_back();
        return ans;
    }
};
