// ques -https://leetcode.com/problems/move-zeroes/submissions/

// approach 1
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       
        
        int n=nums.size();
        
        int t=0;
        
        for(int i=0;i<n;i++){
            
            if(nums[i]!=0){
                nums[t++]=nums[i];
            }
        }
        for(int i=t;i<n;i++){
            
                nums[i]=0;      
            
        }
        
        
    }
};


// approach 2
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       

        int n=nums.size();
        int c=0;
        vector<int> v;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c++;   
                
            }
            if(nums[i]!=0){
                v.push_back(nums[i]);
            }
        }
        for(int i=0;i<c;i++){
            
                v.push_back(0);      
            
        }
        
        for(int i=0;i<n;i++){
            nums[i]=v[i];
                
        }
      
        
    }
};
