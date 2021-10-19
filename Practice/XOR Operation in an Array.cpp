// ques - https://leetcode.com/problems/xor-operation-in-an-array/submissions/

class Solution {
public:
    int xorOperation(int n, int start) {
        
        if(n==0){
            return 0;
        }
        
        if(n==1){
            return start;
        }
        vector<int>v;
        
        for(int i=0;i<n;i++){
            int t=start+2*i;
            v.push_back(t);
        }
        
        int sum=v[0]^v[1];
        
        for(int i=2;i<n;i++){
            
            sum=sum^v[i];
        }
         
        return sum;
        
        
    }
};
