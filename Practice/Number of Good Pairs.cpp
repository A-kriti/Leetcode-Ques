// ques - https://leetcode.com/problems/number-of-good-pairs/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int i,j;
        int c=0;
        int n=nums.size();
        for(i=0;i<n;i++){
            
            for(j=i;j<n;j++){
                
                if(nums[i]==nums[j] & i<j){
                    c+=1;
                }
                
                
            }
            
            
        }
        
        
      return c;  
    }
};
