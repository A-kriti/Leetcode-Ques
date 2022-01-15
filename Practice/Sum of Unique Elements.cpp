// ques - https://leetcode.com/problems/sum-of-unique-elements/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        
        int ans=0;
        for(auto x:m){
            if(x.second==1)ans+=x.first;
        }
        
        return ans;
    }
};
