// ques - https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/submissions/

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum=0;
        int mul=1;
        
        while(n>0){
            int x=n%10;
            
            sum+=x;
            mul*=x;
            
            n=n/10;
            
        }
        
        int ans=mul-sum;
        
        return ans;
    }
};
