// ques - https://leetcode.com/problems/count-the-number-of-consistent-strings/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int n=words.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            ans+=count(allowed,words[i]);
        }
        
        return ans;
    }
    
    int count(string allowed,string tocheck){
        
        unordered_map<char,int>m;
         int n=allowed.length();

        for(int i=0;i<n;i++){
            
            m[allowed[i]]++;
        }
        
        int k=tocheck.length();
        for(int i=0;i<k;i++){
            
            if(m.find(tocheck[i])==m.end()) return 0;
            m[tocheck[i]]++;
        }
        

        return 1;
        
    }
};
