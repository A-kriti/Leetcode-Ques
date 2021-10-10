// ques - https://leetcode.com/problems/counting-bits/

class Solution {
public:
    
    int count_bits(int x){
        
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        
        int c=0;
        
        while(x>0){
            c+=x%2;
            x=x/2;
        }
        
        return c;
        
    }
    
    vector<int> countBits(int n) {
        
        vector<int>v;
        for(int i=0;i<=n;i++){
            int y=count_bits(i);
            v.push_back(y);
        }
        return v;
    }
};
