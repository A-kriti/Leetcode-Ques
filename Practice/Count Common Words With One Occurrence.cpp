// ques - https://leetcode.com/problems/count-common-words-with-one-occurrence/

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        map<string,int>m;
        
        for(string x:words1){
            
            m[x]++;
        }
        
        for(auto &x:m){
            
            if(x.second>1)x.second=-1;
        }
        
        
        for(string x:words2){
            
            m[x]--;
                 
        }
        
        int ans=0;
        
        for(auto x:m){
            
            if(x.second==0)ans++;
        }
        return ans;
        
    }
};
