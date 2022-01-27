// ques - https://leetcode.com/problems/detect-capital/

class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n=word.length();
        int t=0;
        if(isupper(word[0])) t=1;
        
        int c=0;
        for(int i=1;i<n;i++){
            if(isupper(word[i]))c++;
        }
        
        if(t+c==n || (t==1 && c==0) || t+c==0 )return true;
        
        return false;
    }
};
