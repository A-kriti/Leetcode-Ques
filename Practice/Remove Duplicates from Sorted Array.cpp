// ques - https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
         // hashset method
        
        
        int n=nums.size();
        unordered_set<int>m;
        
        for(int i=0;i<n;i++){
            
            if(m.find(nums[i])==m.end()){
                m.insert(nums[i]);
            }
            else{
                nums[i]=INT_MAX;
            }
            
        }
        
        sort(nums.begin(),nums.end());
        
        int t=m.size();
        
        
        
        return t;
        
        
        // hashmap method
        
        /*
        int n=nums.size();
        unordered_map<int,int>m;
        
        vector<int> v;
        
        for(int i=0;i<n;i++){
            
           if(m.find(nums[i])!=m.end()){
                v.push_back(i);
                
            }
            m[nums[i]]++;
        }
        
        
        int t=m.size();
        
        for(int i=0;i<v.size();i++){
            
            nums[v[i]]=INT_MAX;
        }
        
        sort(nums.begin(),nums.end());
        
        return t;
        */
    }
};
