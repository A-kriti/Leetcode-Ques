// ques - https://leetcode.com/problems/robot-return-to-origin/

class Solution {
public:
    bool judgeCircle(string moves) {
        
        int t=0;
        int n=moves.size();
        for(int i=0;i<n;i++){
            
            if(moves[i]=='L' )t--;
            else if(moves[i]=='D')t-=20005;
            else if(moves[i]=='U' )t+=20005;
            else if(moves[i]=='R')t++;
        }
        
        if(t==0)return true;
        return false;
    }
};
