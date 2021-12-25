// ques - https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        //prefix sum
        // -3,-1,-4,0,2
        //     1,-1,-4
        //2,5,10,5,4
        
        int n=nums.size();
        vector<int>v;
        
        v.push_back(nums[0]);
        for(int i=1;i<n;i++){
            v.push_back(v[i-1]+nums[i]);
        }
        
        int ans=*min_element(v.begin(),v.end());
        
        if(ans<=0)return abs(ans)+1;
        
        return 1;
            
    }
};
