// ques - https://leetcode.com/problems/remove-element/submissions/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        /*
        
        method 1
        
        int n=nums.size();
        
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                nums[i]='_';
                c++;
            }
         }
        
        sort(nums.begin(),nums.end());
        
        return n-c;
        
        */
        
        
        //method 2
        
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                
                nums[j]=nums[i];
                j++;
            }         
        }
        
        return j;
        
        
    }
};
