// ques - https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
    
    unordered_map<int,int>m;
   
    vector<int>v1=nums;
    vector<int>v2;
    int n=nums.size();

    sort(v1.begin(),v1.end());
    for(int j=0;j<n;j++){
        
        
        if(m.find(v1[j])==m.end()){
            m[v1[j]]=j;
        }
              
    }     
    
    for(int j=0;j<n;j++){
        
        v2.push_back(m[nums[j]]);      
    }    
    
     return v2;   
        
        
    }
};
