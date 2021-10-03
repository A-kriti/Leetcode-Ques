// ques - https://leetcode.com/problems/single-number/submissions/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        stack<int> s;
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            if(s.empty()){
                s.push(nums[i]);
            }
            else{
                if(s.top()==nums[i]){
                    s.pop();
                }
                
                else{
                    s.push(nums[i]);
                }
            }
                
        }
        
        return s.top();
    }
};
