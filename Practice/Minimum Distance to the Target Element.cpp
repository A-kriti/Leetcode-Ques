// ques - https://leetcode.com/problems/minimum-distance-to-the-target-element/

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        
        int n=nums.size();
        int i=0;
        int ans_min=INT_MAX;
        
        while(i<n){
            
            if(nums[i]==target){
                ans_min=min(ans_min,abs(i - start));
            }
            
            i++;   
        }
        
        return ans_min;
    }
};
