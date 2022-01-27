// ques - https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        vector<int>v;
        map<int,int>m;
        map<int,int>m1;
        vector<int>v1;
        
        for(int i=0;i<n;i++){
            
            m[nums[i]]++;
        }
        
        for(int i=0;i<n;i++){
            
                if(m[nums[i]]>1)v.push_back(nums[i]);
                else if(m.find(nums[i]+1)!=m.end())v.push_back(nums[i]);
            
                else if(m.find(nums[i]-1)!=m.end())v.push_back(nums[i]);     
        }
        
        
        for(int i=0;i<v.size();i++){
            
            m1[v[i]]++;
        }
        
        
        
        for(auto x:nums){
            if(m1.find(x)==m1.end()){
                v1.push_back(x);
            }
                 
        }
        
        return v1;

    }
};
