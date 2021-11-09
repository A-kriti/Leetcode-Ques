// ques - https://leetcode.com/problems/running-sum-of-1d-array/


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        //method 1
        int n=nums.size();
       
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        int i=n-1;
        int t=sum-nums[i];
        while(i>0){
            
            int c=nums[i-1];
            nums[i-1]=t;
            t=t-c;
            i--;
            
        }
        
        nums[n-1]=sum;
        
        return nums;
        
        
        //method 2
        /*int n=nums.size();
        vector<int>v;
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        v.push_back(sum);
        int t=sum;
        for(int i=n-1;i>=1;i--){
            
            t=t-nums[i];
            v.push_back(t);
            
        }
        
        reverse(v.begin(),v.end());
        
        return v;*/
        
        
    }
};
