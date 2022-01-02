// ques - https://leetcode.com/problems/maximum-difference-between-increasing-elements/

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
              
        //method 1
        int n=nums.size();
        int ans=0;
        int p=INT_MAX;
        
        for(int i=0;i<n;i++){   
            
            p=min(p,nums[i]);
            ans=max(ans,nums[i]-p);

        }
        
        return ans==0 ?-1:ans;
        
        
         //method 2    
//         int m=INT_MIN;
//         int n=nums.size();
        
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 int dif=nums[j]-nums[i];
//                  m=max(m,dif);
//             }
//         }
        
//          if(m>0) return m;
//          return -1;
        
        

    }
};
