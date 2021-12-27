// ques - https://leetcode.com/problems/count-the-number-of-consistent-strings/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        
        
        unordered_map<char,int>m;
        int y=allowed.length();

        for(int i=0;i<y;i++){
            
            m[allowed[i]]++;
        }
        
        int n=words.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            ans+=count(m,words[i]);
        }
        
        return ans;
    }
    
    int count(unordered_map<char,int>m,string tocheck){
        
        int k=tocheck.length();
        for(int i=0;i<k;i++){
            
            if(m.find(tocheck[i])==m.end()) return 0;
            m[tocheck[i]]++;
        }
        
        return 1;
        
    }
};
