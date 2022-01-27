// ques - https://leetcode.com/problems/capitalize-the-title/

class Solution {
public:
    string capitalizeTitle(string title) {
        
        title+=' ';
        string s="";
        int n=title.size();
        
        string t="";
        for(int i=0;i<n;i++){
            
            
            if(title[i]==' '){
                transform(t.begin(),t.end(),t.begin(),::tolower);
                if(t.size()<=2){
                    
                    s+=t;
                    s+=' ';
                }
                
                else if(t.size()>2){
                    
                    t[0]-=32;
                    s+=t;
                    s+=' ';
                }
                
                t="";
                        
            }
            
            else t+=title[i];
        }
        s.pop_back();
        
        return s;
    }
};
