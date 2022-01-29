// ques - https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    static string Str_reverse(string k){
        
        int m=k.size();
        string g="";
        for(int i=m-1;i>=0;i--){
            g+=k[i];
        }
        
        return g;
    }
    
    string reverseWords(string s) {
        
        s.insert(s.begin()+0,' ');
        int n=s.size();
        string t="";
        string y="";
        
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ') {
                if(y!=""){
                    t+=Str_reverse(y);
                    t+=' ';
                    y=""; 
                }
                
            }
            
            else y+=s[i];
        }
        
        t.pop_back();
        
        return t;
    }
};
