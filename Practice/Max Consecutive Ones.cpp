// ques - https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n=nums.size();
        int i=0;
        int ans=0;
        int c=0;
        while(i<n){
            
            if(nums[i]==1)c++;    
            else c=0;
            
            ans=max(c,ans);
            i++;
        }
        
        return ans;
        
    }
};
