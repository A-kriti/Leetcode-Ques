// ques - https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        
       /* brute force approach
       
       int n=nums.size();
        
        vector<int> v;
        
        for(int i=0;i<n;i++){
            
            v.push_back(pow(nums[i],2));
            
        }
        
      sort(v.begin(),v.end());
      return v;  */
        
        // 2 pointer approach
        
        
        int n=nums.size();
        
        vector<int> v(n);
        
        int left=0;
        int right=n-1;
        
        while(left<=right){
            
            int x=pow(nums[left],2);
            int y=pow(nums[right],2);
            
            if(x>y){
                v[--n]=x;
                left++;
                
            }
            
            else {
                v[--n]=y;
                right--;
                
            }
        }
     
      return v;
        
    }
};
