// ques - https://leetcode.com/problems/sort-array-by-parity/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        //method 1
        int n=nums.size();
        int i=0;
        int j=n-1;
        
        while(i<=j){
            
            if(nums[i]%2!=0 && nums[j]%2==0){
                
                    swap(nums[j],nums[i]);
                    i++;
                    j--;
                
            }
            else if(nums[i]%2==0)i++;
            else if(nums[j]%2!=0)j--;
            
        }
        

        return nums;
        
        //method 2
        // vector<int>v;
        // for(int x:nums){
        //     if(x%2==0)v.push_back(x);
        // }
        // for(int x:nums){
        //     if(x%2!=0)v.push_back(x);
        // }
        // return v;
    }
};
