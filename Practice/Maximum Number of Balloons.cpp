// ques - https://leetcode.com/problems/maximum-number-of-balloons/

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        map<char,int>m;
        
        for(char x:text){
            m[x]++;
        }
        
        
        return min(m['o']/2,min(m['l']/2,min(m['b'],min(m['a'],m['n']))));
        
        
    }
};
