// ques - https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int>m;
        
        int k=n/2;
        
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        for(auto x:m){
            if(x.second==k)return x.first;
        }
        
        return 0;
    }
};
