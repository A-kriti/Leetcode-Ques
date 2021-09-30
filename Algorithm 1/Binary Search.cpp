// ques - https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        int left=0;
        int right=n;
        
        
        
        for(int i=0;i<n;i++){
            
            int mid=(left+right)/2;
            
            if(nums[mid]==target){
                return mid;
                break;
            }
            
            else if(nums[mid]>target){
                
                right=mid;
            }
            
            else{
                
                left=mid;
            }    
        }
        
        
        return -1;
    }
};
