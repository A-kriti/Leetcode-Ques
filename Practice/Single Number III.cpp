// ques - https://leetcode.com/problems/single-number-iii/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int>v;
        unordered_map<int,int>m;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        for(auto x:m){
            if(x.second==1)v.push_back(x.first);
        }
        
        return v;
    }
};
