// ques - https://leetcode.com/problems/sqrtx/submissions/

class Solution {
public:
    int mySqrt(int x) {
        
        
        if(x==0){
            return 0;
        }
        long int i=1;
        
        int ans;
        
        while(i<x){
            
            if(i*i>x){
                return i-1;
            }
            i++;
        }
        
        return 1;
    }
};
