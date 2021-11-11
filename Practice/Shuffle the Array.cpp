// ques - https://leetcode.com/problems/shuffle-the-array/submissions/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        // method 1
        //vector<int>v;
        for(int i=0;i<n;i++){
            
            
            nums[n+i]+=nums[i]*1001;
            
        }
        
        for(int i=0;i<n;i++){
            
            nums[2*i]=nums[i+n]/1001;
            nums[2*i+1]=nums[i+n]%1001;
            
        }
        
        return nums;
        
        // method 2
        
        /*vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(nums[i]);
            v.push_back(nums[n+i]);
            
        }
        
        return v;*/
    }
};
