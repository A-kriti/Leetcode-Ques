// ques - https://leetcode.com/problems/count-items-matching-a-rule/submissions/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int n=items.size();
        int m=items[0].size();
        int c=0;
        
        for(int i=0;i<n;i++){
                
                if(ruleKey == "color"){
                    
                    if(items[i][1]==ruleValue)c++;
                }
                
                else if(ruleKey == "type"){
                    
                    if(items[i][0]==ruleValue)c++;
                }
                
                else if(ruleKey == "name"){
                    
                    if(items[i][2]==ruleValue)c++;
                }
         
        }
        
        return c;
        
    }
};
