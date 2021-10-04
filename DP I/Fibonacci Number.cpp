// ques - https://leetcode.com/problems/fibonacci-number/submissions/

class Solution {
public:
    int fib(int n) {
        
        if(n==0){
            return 0;
        }
        
        if(n==1){
            return 1;
        }
        
        /* Recursive approach
        
        int ans=1;
        
        int i=2;
        while(i<=n){
            ans=fib(i-1)+fib(i-2);
            i++;
        }
        return ans;*/
        
        
        
        vector<int> l={0,1};
        for(int i=2;i<=n;i++){
            
            l.push_back(l[i-1]+l[i-2]);
        }
        
        return l[l.size()-1];
    }
};
