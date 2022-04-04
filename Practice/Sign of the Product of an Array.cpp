// ques - https://leetcode.com/problems/sign-of-the-product-of-an-array/

class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int pro=1;
        for(int x:nums){
            if(x>0)pro*=1;
            else if(x<0)pro*=-1;
            else pro*=0;
            
        }
        
        return pro;
    }
};
