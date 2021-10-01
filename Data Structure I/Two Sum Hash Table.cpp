// ques - https://leetcode.com/problems/two-sum/submissions/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        vector<int> v;
        int n=nums.size();
        
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            
            if(m.find(target-nums[i])!=m.end()){
                
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                
                return v;
            }
            
            m[nums[i]]=i;
        }
        
        return v;
    }
};
