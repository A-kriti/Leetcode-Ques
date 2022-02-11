// ques - https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        int c=1;
        int n=sentence.size();
        int i=0;
        bool b=false;
        string t="";
        
        while(i<n){
            
            if(sentence[i]!=' '){
                
                t+=sentence[i];
                if(t==searchWord){
                    b=true;
                    break;
                }     
            }
            
            else{
                
                c++;
                t="";
            } 
            i++;   
        }
        
        return b==true?c:-1;
        
    }
};
