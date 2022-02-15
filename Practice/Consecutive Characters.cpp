// ques - https://leetcode.com/problems/consecutive-characters/

class Solution {
public:
    int maxPower(string s) {
        
        int i=0;
        int j=1;
        int ans=1;
        
        int c=1;
        while(j<s.size()){
            
            if(s[i]==s[j])c++;
            
            else c=1;
            
            ans=max(c,ans);
            i++;
            j++;
        }
        
        return ans;
    }
};
