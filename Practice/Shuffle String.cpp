// ques - https://leetcode.com/problems/shuffle-string/

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string p=s;
        int n=indices.size();

        for(int i=0;i<n;i++){
            
            p[indices[i]]=s[i];
            
        }
        
        return p;
        
        
    }
};
