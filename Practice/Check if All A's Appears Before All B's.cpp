// ques - https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/

class Solution {
public:
    bool checkString(string s) {
        
        int n=s.size();
        
        for(int i=1;i<n;i++){
            
            if(s[i-1]=='b' && s[i]=='a')return false;
        }    

        return true;
    }
};
