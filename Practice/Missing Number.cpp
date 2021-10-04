// ques - https://leetcode.com/problems/missing-number/submissions/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        if(nums[0]!=0){
            return 0;
        }
        
        int sum=0;
        for(int i=0;i<n;i++){
            
               sum+=nums[i]; 
            
        }
    
        int act_sum=0;
        for(int i=0;i<=n;i++){
            
               act_sum+=i; 
            
        }
    
        int z=act_sum-sum;
        
        return z;
    }
};
