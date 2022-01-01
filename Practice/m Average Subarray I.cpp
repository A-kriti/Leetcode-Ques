// ques - https://leetcode.com/problems/maximum-average-subarray-i/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n=nums.size();
        int i=0;
        int j=0;
        int ans=0;
        double r=INT_MIN;
       
        while(j<n){
            
            ans+=nums[j];
            
            if(j-i+1<k){
                
                j++;
                
            }
            
            else if(j-i+1==k){
                
                double g=k;
                double qr=ans/g;
                r=max(r,qr);
                
                ans-=nums[i];
                i++;
                j++;
                
            }
            
            
        }
        
        
        return r;
        
        
    }
};
