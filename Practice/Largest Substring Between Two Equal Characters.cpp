// ques - https://leetcode.com/problems/largest-substring-between-two-equal-characters/

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        int n=s.size();

        map<char,pair<int,int>>m;
        bool b=false;
        int ans_max=INT_MIN;
        
        int i_max=INT_MIN;
        int i_min=INT_MAX;
        
        
        for(int i=0;i<n;i++){
            
            if(m.find(s[i])!=m.end()){
                b=true;
                i_max=max(i,m[s[i]].first);
                i_min=min(i,m[s[i]].second);
                
                m[s[i]]={i_max,i_min};
                ans_max=max(ans_max,i_max-i_min-1);
            }
            
            else {
                
                m[s[i]]={i,i};
            }
        }
        
        return b==true ? ans_max:-1;
         
    }
};
