// ques - https://leetcode.com/problems/reduction-operations-to-make-the-array-elements-equal/

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        
        int n=nums.size();
        map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        
        vector<int>v;
        for(auto i:m){
            v.push_back(i.first);
        }
        reverse(v.begin(),v.end());
        
        v.pop_back();
        int ans=0;
        int cnt=0;
        for(int i:v){
            cnt+=m[i];
            ans+=cnt;
        }
        
        return ans;
    }
};
