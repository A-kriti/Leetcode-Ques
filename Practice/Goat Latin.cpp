// ques - https://leetcode.com/problems/goat-latin/

class Solution {
public:
    bool is_vowel(char x){
        
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
            return true;
        return false;
    }
    
    string toGoatLatin(string sentence) {
        
        sentence+=' ';
        
        string s="";
        string t="";
        
        int n=sentence.size();
        int c=0;
        for(int i=0;i<n;i++){
            
            if(sentence[i]==' '){
                c++;
                if(is_vowel(t[0])){
                    t+="ma";
                    
                }
                
                else{
                    char r=t[0];
                    t.erase(t.begin()+0);
                    t+=r;
                    t+="ma";
                    
                }
                
                for(int j=0;j<c;j++){
                        t+='a';
                }
                   
                s+=t;
                s+=' ';
                t="";
            }
            
            else t+=sentence[i];
        }
        
        s.pop_back();
        return s;
        
    }
};
