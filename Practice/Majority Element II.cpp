// ques - https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        map<int,int>m;
        
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        vector<int>v;
        for(auto x:m){
           
            if(x.second>n/3){
                v.push_back(x.first);
            }
        }
        
        
        return v;
    }
};
