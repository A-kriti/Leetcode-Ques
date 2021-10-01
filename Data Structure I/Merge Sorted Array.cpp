// ques - https://leetcode.com/problems/merge-sorted-array/submissions/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        int i=0;
        int j=0;
        
        while(i<m && j<n){
            
            int x=nums1[i];
            int y=nums2[j];
            
            if(nums1[i]<=nums2[j]){
                i++;
            }
            
            else if(nums1[i]>nums2[j]){
                
                int t=nums1[i];
                nums1[i]=nums2[j];
                nums2[j]=t;
                
                sort(nums2.begin(),nums2.end());
                i++;
                
                
            }
        }
        
        
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
    }
};
