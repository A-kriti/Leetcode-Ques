// ques - https://leetcode.com/problems/subsets/submissions/

class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int>empty;
        generate(empty,0,nums);
        return ans;
        
    }
    
    void generate(vector<int>& subset,int i,vector<int>& nums){
        
        if(i==nums.size()){
            ans.push_back(subset);
            return;
        }
        
        generate(subset,i+1,nums);
        
        subset.push_back(nums[i]);
        generate(subset,i+1,nums);
        subset.pop_back();
    }
};
