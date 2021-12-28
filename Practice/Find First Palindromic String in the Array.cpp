// ques - https://leetcode.com/problems/find-first-palindromic-string-in-the-array/

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        int n=words.size();
        
        for(int i=0;i<n;i++){
            
            string b=words[i];
            reverse(b.begin(),b.end());
            
            if(b==words[i]) return b;
        }
        
        
        return "";
    }
};
