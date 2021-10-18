// ques - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/

class Solution {
public:
     vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>v={-1,-1};
        
        int n=nums.size();
         
        
        int left=0;
        int right=n-1;
        
        
        while(left<=right){
            
            if(nums[left]==target && nums[right]==target ){
                
                v[0]=left;
                v[1]=right;
                break;
            }
        
           
            else{
                
                if(nums[left]!=target)left++;
                if(nums[right]!=target)right--;
            }
        }
        
        
        return v;
        
    }
};
