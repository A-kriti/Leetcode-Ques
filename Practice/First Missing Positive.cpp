// ques - https://leetcode.com/problems/first-missing-positive/submissions/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        // method 1
        //time:O(n)  space:O(1)
        
        int n=nums.size();
        
       
        for(int i=0;i<n;i++){
            
            if(nums[i]<=0 || nums[i]>n){
                nums[i]=n+1;
            }
               
        }
             
        for(int i=0;i<n;i++){
            
            int j=abs(nums[i]);
            if(j>n)continue;
            j--;
            
            if(nums[j]>0) nums[j]=-nums[j];
            
        }
        
        
        for(int i=0;i<n;i++){
            
            if(nums[i]>0) {
                
                return i+1;
                
            }
            
        }
        
        
        return n+1;
        
        
        // method 2
        //time:O(n)  space:O(n)
        
        
//         int n=nums.size();
//         unordered_map<int,int>m;
        
//         int max_val=INT_MIN;
       
//         for(int i=0;i<n;i++){
//             max_val=max(max_val,nums[i]);    
//         }
             
//         for(int i=0;i<n;i++){

//             m[nums[i]]++;
//         }
        
        
//         for(int i=1;i<=n;i++){
            
//             if(m.find(i)==m.end()) {
                
//                 return i;
                
//             }
            
//         }
        
        
//         return n+1;
        
    }
};
