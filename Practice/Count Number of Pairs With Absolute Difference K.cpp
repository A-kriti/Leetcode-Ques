//ques - https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        //method 1
        unordered_map<int,int>m;
        int ans=0;
        for(int x:nums){
            ans+=m[x+k];
            ans+=m[x-k];
            m[x]++;
        }
        return ans;
        
        //method 2
//         int n=nums.size();
//         int c=0;
        
//         for(int i=0;i<n;i++){
//            for(int j=i+1;j<n;j++){
//                 if(abs(nums[i]-nums[j])==k)c++;
//             } 
//         }
//         return c;
    }
};
