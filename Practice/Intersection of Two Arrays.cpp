// ques - https://leetcode.com/problems/intersection-of-two-arrays/submissions/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        
        vector<int> v;
        unordered_set<int> t;
        
        int x=nums1.size();
        int y=nums2.size();
        
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
            
                 if(nums2[j]==nums1[i]){
                
                if(t.find(nums1[i])==t.end())   
                    t.insert(nums1[i]);
                }
                     
            }
        }
        
        for ( auto it = t.begin(); it != t.end(); ++it ){
            v.push_back(*it);
        }
        
       return v; 
        
    }
};
