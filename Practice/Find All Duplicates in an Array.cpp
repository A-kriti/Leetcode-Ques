// ques - https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        //Method 1
        
        int n=nums.size();
        vector<int>v;
        
        for(int i=0;i<n;i++){
            int t=abs(nums[i]);
            
            if(nums[t-1]>=0)
                nums[t-1]=-nums[t-1];
            
            else v.push_back(t);
                
        }
        
        return v;
        
        //Method 2
        
//         int n=nums.size();
//         map<int,int>m;
//         vector<int>v;
        
//         for(int x:nums){
//             m[x]++;
//         }
        
//         for(auto x:m){
//             if(x.second==2)v.push_back(x.first);
//         }
        
//         return v;
        
    }
};
