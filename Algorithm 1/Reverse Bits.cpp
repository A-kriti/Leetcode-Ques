// ques - https://leetcode.com/problems/reverse-bits/submissions/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
     
    // method 1
        
    bitset<32>b(n);
    bitset<32>t;
         
    for(int i=0;i<32;i++){
        t[i]=b[31-i];
    }
        
    uint32_t sum=0;
        
    for(int i=0;i<32;i++){
        sum+=(t[31-i])*pow(2,31-i);
    }
        
     
    return sum;
        
    // method 2
        
    /*bitset<32>b(n);
        
    for(int i=0;i<32;i++){
        b[i]=b[i]^1;
    }
        
    uint32_t sum=0;
        
    for(int i=0;i<32;i++){
        sum+=(b[i]^1)*pow(2,31-i);
    }
        
     
    return sum;*/
        
    }
};
