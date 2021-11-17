// ques - https://leetcode.com/problems/truncate-sentence/

class Solution {
public:
    string truncateSentence(string s, int k) {
        
        // Time: O(n) and Space: O(1)
        string t="";
        int n=s.length();
        
        for(int i=0;i<n;i++){
            
            if(s[i]==' ') k--;
            
            if(k>0){
                t+=s[i];
            }
            
            
        }
        
        return t;
    }
};
