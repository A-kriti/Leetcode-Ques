// ques - https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        map<int,int> m;
        
        for(int i=0;i<n;i++){
            
            if (m.find(nums[i]) == m.end()) {
            m[nums[i]] = 1;
            }
 
            else {
                m[nums[i]]++;
                return true;
            }
            
        }
        
        return false;
        
    }
};
