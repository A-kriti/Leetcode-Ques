// ques - https://leetcode.com/problems/count-of-matches-in-tournament/

class Solution {
public:
    int numberOfMatches(int n) {
        
        int ans=0;
        int x;
        while(n>1){
            x=n/2;
            ans+=x;
            
            n=n-x;
        }
        return ans;
    }
};
