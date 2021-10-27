// ques - https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/submissions/

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            
            if(nums[i]==1){
                if(m.find(nums[i])!=m.end()){
                    if(i-m[nums[i]]-1<k){
                        return false;
                    }
                }
            }
            
      m[nums[i]]=i;
            
     }
        
        return true;
        
    }
};
