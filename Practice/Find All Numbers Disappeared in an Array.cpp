// ques - https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        
        // Method 1
        // Time: O(n) and Space:O(n)
        int n=nums.size();
     
       
        
        vector<int>v(n,0);
        
        for(int i=0;i<n;i++){
            
            int j=nums[i]-1;
            
            if(v[j]==0) v[j]=nums[i];
                      
        }
        
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            
            if(v[i]==0) ans.push_back(i+1);
        }
        
        
        return ans;
        
        
        // Method 2
        // Time: O(n) and Space:O(n)
//         int n=nums.size();
//         unordered_map<int,int>m;
        
//         for(int i=1;i<=n;i++){
//             m[i]=0;
//         }
        
//         vector<int>v;
        
//         for(int i=0;i<n;i++){
//             m[nums[i]]++;
//         }
        
//         for(auto x:m){
            
//             if(x.second==0) v.push_back(x.first);
//         }
        
//         return v;
    }
};
