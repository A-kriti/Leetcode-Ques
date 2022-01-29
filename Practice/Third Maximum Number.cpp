// ques - https://leetcode.com/problems/third-maximum-number/

class Solution {
public:

    int thirdMax(vector<int>& nums) {
        
        int n=nums.size();
        
        unordered_set<int>s;
        
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        
        vector<int>v(s.begin(),s.end());
        sort(v.begin(),v.end());
        int n1=v.size();
        
        if(n1>=3)return v[n1-3];
        
        if(n1==2)return v[1];
        
        return v[0];
        
    }
};
