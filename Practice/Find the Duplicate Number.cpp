// ques - https://leetcode.com/problems/find-the-duplicate-number/submissions/


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        //method 1 unordered_map
        
        int n=nums.size();
        int ans;
        
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++){
            
            m[nums[i]]++;
        }
        
        for(auto x:m){
            if(x.second>=2){
                ans=x.first;
            }
        }
        
        return ans;
        
        //method 2 sorting 
        
        /*sort(nums.begin(),nums.end());
        
        int n=nums.size();
        int ans;
        
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                ans=nums[i];
            }   
        }
        
        return ans;*/
        
        
        //method 3 stack
        
        /*
        sort(nums.begin(),nums.end());
        
        stack<int>s;
        s.push(nums[0]);
        int n=nums.size();
        int ans;
        
        for(int i=1;i<n;i++){
            if(nums[i]!=s.top()){
                s.push(nums[i]);
            }
            
            else{
                ans=nums[i];
                return ans;
            }
        }
        
        return ans;*/
    }
};
