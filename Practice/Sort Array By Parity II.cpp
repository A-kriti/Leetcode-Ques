// ques - https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        int n=nums.size();
       
        int x=1;  //odd
        int y=0;  //even
        
        while(y<n && x<n){
            
            if(nums[x]%2==0 && nums[y]%2!=0){
                swap(nums[x],nums[y]);
            }
            
            if(nums[x]%2!=0 ){
                x+=2;
                
            }
            
           if(nums[y]%2==0){
                
                y+=2;
            }
               
        }
        
        
        return nums;
    }
};
