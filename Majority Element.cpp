// ques - https://leetcode.com/problems/majority-element/submissions/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
      
       unordered_map<int,int> m;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            
            if(m.find(nums[i])==m.end()){
                m[nums[i]]=1;
            }
            else{
                m[nums[i]]++;
            }
        }
        
        int frequency_count=0;
        int most_frequent_element=0;
        
        for(auto t=m.cbegin();t!=m.cend();++t){
            
            if(t->second>frequency_count){
                
                most_frequent_element=t->first;
                frequency_count=t->second;
            }
            
            
        }
        
        
        return most_frequent_element;
        
    }
};
