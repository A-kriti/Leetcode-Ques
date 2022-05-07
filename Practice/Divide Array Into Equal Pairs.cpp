// ques - https://leetcode.com/problems/divide-array-into-equal-pairs/

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        int n=nums.size();
        map<int,int>m;
        int c=0;
        
        for(int i=0;i<n;i++){
            
            if(m[nums[i]]%2==0)c++;
            
            m[nums[i]]++;
        }
        
        return 2*c==n;
    }
};
