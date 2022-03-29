// ques - https://leetcode.com/problems/get-maximum-in-generated-array/

class Solution {
public:
    int getMaximumGenerated(int n) {
        
        if(n==0)return 0;
        if(n==1)return 1;
        
        int x=n;
        int t[105];
        t[0]=0;
        t[1]=1;
    
        for(int i=1;i<=n/2;i++){
            
                t[2*i]=t[i];
                t[2*i+1]=t[i]+t[i+1];
                
        }
       
        int c=INT_MIN;
        for(int i=0;i<=n;i++){
            c=max(c,t[i]);
        }
        
        return c;
        
    }
};
