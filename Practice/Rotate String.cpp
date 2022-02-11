// ques - https://leetcode.com/problems/rotate-string/

class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int n=s.size();
        
        for(int i=0;i<n;i++){
            char t=s[n-1];
            s.pop_back();
            s.insert(s.begin()+0,t);
            
            if(s==goal)return true;
        }
        
        return false;
    }
};
