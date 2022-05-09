// ques - https://leetcode.com/problems/rearrange-array-elements-by-sign/

class Solution {
public:

    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        int i=0;
        int j=1;
        int k=0;
        vector<int>v=nums;
        
        while(k<n){
          
            if(nums[k]>=0){
                v[i]=nums[k];
                i+=2;
            }
            else if(nums[k]<0){
                v[j]=nums[k];
                j+=2;
            }
            k++;
        }
        
        return v;
    }
};
