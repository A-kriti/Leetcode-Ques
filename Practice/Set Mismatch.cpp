// ques - https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
   
        map<int,int>m;
        int n=nums.size();
        
        for(int i=1;i<=n;i++){
            m[i]++;
        }
        
        for(int i=0;i<n;i++){
            m[nums[i]]--;
        }
        
        vector<int>v;
        int a=0;
        int b=0;
        for(auto x:m){
            if(x.second<0)a=x.first;
            if(x.second>0)b=x.first;
        }
        
        v.push_back(a);
        v.push_back(b);
        
        return v;
    }
};
