// ques - https://leetcode.com/problems/goal-parser-interpretation/

class Solution {
public:
    string interpret(string command) {
        
        string s="";
        string t="";
        
        int n=command.size();
        for(int i=0;i<n;i++){
            t+=command[i];
            if(t=="G"){
                s+=t;
                t="";
            }
            
            else if(t=="()"){
                s+="o";
                t="";
            }
            else if(t=="(al)"){
                s+="al";
                t="";
            }
        }
        
        return s;
    }
};
