// ques - https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size();
        
        int z=*max_element(nums.begin(),nums.end());
        
        int ans;
        for(int i=0;i<n;i++){
            if(nums[i]==z){
                ans=i;
                break;
            }
        }
        
        return ans;
    }
};
