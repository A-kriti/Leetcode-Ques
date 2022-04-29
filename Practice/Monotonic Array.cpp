// ques - https://leetcode.com/problems/monotonic-array/

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        int n=nums.size();
        int m_inc=0;
        int m_dec=0;
        
        for(int i=0;i<n-1;i++){
            
            if(nums[i]<=nums[i+1]){
                m_inc++;
            }
            
            if(nums[i]>=nums[i+1]){
                m_dec++;
            }
        }
        
        return (m_inc==n-1 || m_dec==n-1)? true : false;
        
    }
};
