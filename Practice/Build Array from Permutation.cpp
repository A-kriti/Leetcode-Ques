// q->https://leetcode.com/problems/build-array-from-permutation/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        
        // method 1
        
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            
            nums[i]=nums[i]+n*(nums[nums[i]]%n);
        }
        
        
        for(int i=0;i<n;i++){
            
            nums[i]=nums[i]/n;
        }
        
        
        return nums;
        
        // method 2
        
        
        /*vector<int> v;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            
            v.push_back(nums[nums[i]]);
        }
        
        
        return v;*/
    }
};
