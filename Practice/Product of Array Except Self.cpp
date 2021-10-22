// ques - https://leetcode.com/problems/product-of-array-except-self/submissions/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
        int product=1;
        vector<int>ans;
        ans.push_back(nums[0]);
        int n=nums.size();
        
        for(int i=0;i<n-1;i++){
            ans.push_back(ans[i]*nums[i+1]);
        }
        
        
        for(int i=n-1;i>0;i--){
            
            ans[i]=ans[i-1]*product;
            product*=nums[i];
            
        }
        
        ans[0]=product;
        
        return ans;
              
    }
};
