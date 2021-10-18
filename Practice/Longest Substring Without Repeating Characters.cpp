// ques - https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.length();
        
        vector<int>m(256,-1);
      
        int start=-1;
        int ans=0;
        
        for(int i=0;i<n;i++){
        
           if(m[s[i]]>start){
               start=m[s[i]];
           }
               
           m[s[i]]=i;
           ans=max(ans,i-start);     
        }
        
        return ans;
        
    }
};
