// ques - https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        
        int x=nums1.size();
        int y=nums2.size();
        
        vector<int> v;
        
        int i=0;
        int j=0;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        while(i<x && j<y){
            
            if(nums1[i]==nums2[j]){
                v.push_back(nums1[i]);
                i++;
                j++;
                    
            }
            
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        
        }
        
        
              
        
        return v;
    }
};
