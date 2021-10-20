// ques - https://leetcode.com/problems/median-of-two-sorted-arrays/


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        
        int x=nums1.size();
        int y=nums2.size();
        
        vector<int>v;
        int i=0;
        int j=0;
        
        while(i<x && j<y){
            
            if(nums1[i]<=nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            
            else{
                v.push_back(nums2[j]);
                j++;
                
                 }
        }
        
        while(i<x){
            v.push_back(nums1[i]);
            i++;
        }
        
        while(j<y){
            v.push_back(nums2[j]);
            j++;
        }
        
        
        int n=v.size();
        double ans;
        
        if(n%2==0){
            int t=n/2;
            ans=(v[t]+v[t-1])/2.0;
        }
        
        else{
            ans=v[n/2];
        }
        
        return ans;
        
    }
};
