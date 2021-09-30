// ques- https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        int left=0;
        int right=n;
        
        for(int i=0;i<n;i++){
            
            int mid=(left+right)/2;
            
            if(nums[mid]>=target){
                
                right=mid;
            }
            
            else{
                left=mid;
            }
        }
        
        return right;
    }
};
