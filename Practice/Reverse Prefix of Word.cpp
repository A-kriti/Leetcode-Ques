// ques - https://leetcode.com/problems/reverse-prefix-of-word/submissions/


class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int n=word.length();
        int t=0;
        
        for(int i=0;i<n;i++){
            
            if(word[i]==ch){
                t=i;
                break;
            }
        }
        
        reverse(word.begin(),word.begin()+t+1);
        
        return word;
        
    }
};
