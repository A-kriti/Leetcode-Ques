// ques - https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        
        int x=nums1.size();
        int y=nums2.size();
        
        vector<int> v;
        
        unordered_map<int,int> m;
        
        if(x>=y){
            for(int i=0;i<x;i++){
                m[nums1[i]]++;
            }
            
            for(int i=0;i<y;i++){
                if(m.find(nums2[i])!=m.end() && m[nums2[i]]>0){
                    v.push_back(nums2[i]);
                    m[nums2[i]]--;
                }
            }
        }
        
        else{
            for(int i=0;i<y;i++){
                m[nums2[i]]++;
            }
            
            for(int i=0;i<x;i++){
                if(m.find(nums1[i])!=m.end() && m[nums1[i]]>0){
                    v.push_back(nums1[i]);
                    m[nums1[i]]--;
                }
            }
        }
        
        return v;
        
    }
};
