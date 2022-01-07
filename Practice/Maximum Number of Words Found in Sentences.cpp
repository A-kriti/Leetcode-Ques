// ques - https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    int n=sentences.size();
        
        int m=INT_MIN;

        for(string x:sentences){
            
            int t=0;
        for(int j=0;j<x.length();j++)	{
                
        if(x[j]==' ')t++;
                
                }
            	
            
            m=max(m,t+1);
            	
            
            }
        
        return m;
    }
};
