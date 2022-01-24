// ques - https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>v=nums2;
        stack<int>s;
        int n=nums2.size();
        map<int,int>m;
        
        for(int i=0;i<n;i++){
            m[nums2[i]]=i;
            
            if(s.empty()){
                s.push(i); 
                continue;
            }
            
            while(!s.empty() && nums2[s.top()]<nums2[i]){
                v[s.top()]=nums2[i];
                s.pop();
                
            }
            
            s.push(i);
            
        }
        
        while(!s.empty()){
            v[s.top()]=-1;
            s.pop();
        }
        
        
        int y=nums1.size();
        
        for(int i=0;i<y;i++){
            nums1[i]=v[m[nums1[i]]];  
        }
        
        return nums1;
        
    }
};
