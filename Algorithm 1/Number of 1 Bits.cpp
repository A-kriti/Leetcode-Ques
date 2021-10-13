// ques - https://leetcode.com/problems/number-of-1-bits/submissions/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        // method 1
        
        int c=0;
        int y=0;
       
        while(n!=0){
            if(n%2==1){
                c++;
            }
           n=n/2;
            y++;
        }
        
        return c;
        
        
        // method 2
        
        /*bitset<32>b(n);
        int c=0;
        int y=0;
       
        while(y<32){
            if(b[y]&1){
                c++;
            }
           
            y++;
        }
        
        return c;*/
    }
};
