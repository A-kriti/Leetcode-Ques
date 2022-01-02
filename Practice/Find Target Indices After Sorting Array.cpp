// ques - https://leetcode.com/problems/find-target-indices-after-sorting-array/

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        //method 1
        int n=nums.size();
        vector<int>v;
        
        int x=0;  // num==target;
        int y=0; // num<target
        
        
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                x++;
            }
            
            else if(nums[i]<target)y++;
        }
        
        while(x){
            v.push_back(y++);
            x--;
        }
        
        return v;     
        
        
        //method 2
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         vector<int>v;
        
//         for(int i=0;i<n;i++){
//             if(nums[i]==target){
//                 v.push_back(i);
//             }
//         }
        
//         return v;
        
    }
};
